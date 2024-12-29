//.hpp文件用于声明；.cpp文件用于定义函数；名字空间可区分不同的开发者
#include"ExecutorImpl.hpp"
#include "Command.hpp"
#include "CmderFactory.hpp"
#include "Singleton.hpp"
#include<unordered_map>
#include<iostream>
#include<memory>
namespace adas{
    //新建一个对象，返回的是基类的指针
    Executor* Executor::NewExecutor(const Pose& pose,const std::string& kind)noexcept{
        return new ExecutorImpl(pose,kind);
    }
    //构造函数
    ExecutorImpl::ExecutorImpl(const Pose& pose,const std::string& kind) noexcept : poseHandler(pose), kind(kind){}
    void ExecutorImpl::Execute(const std::string& commands)noexcept{
        const auto cmders = Singleton<CmderFactory>::Instance().GetCmders(commands,kind);
        std::for_each(cmders.begin(),cmders.end(),[this](const Cmder& cmder) noexcept {cmder(poseHandler).DoOperate(poseHandler);}); 
    }
    //查询
    Pose ExecutorImpl::Query(void)const noexcept{
        return poseHandler.Query();
    }
};