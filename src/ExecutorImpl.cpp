//.hpp文件用于声明；.cpp文件用于定义函数；名字空间可区分不同的开发者
#include"ExecutorImpl.hpp"
#include "Command.hpp"
#include<unordered_map>
#include<iostream>
#include<memory>
namespace adas{
    //新建一个对象，返回的是基类的指针
    Executor* Executor::NewExecutor(const Pose& p){
        return new ExecutorImpl(p);
    }
    //构造函数
    ExecutorImpl::ExecutorImpl(const Pose& p) : poseHandler(p){}
    /*//移动函数
    void PoseHandler::Move(){
        switch (pose.heading) {
            case 'E': ++pose.x;break;
            case 'W':--pose.x;break;
            case 'N':++pose.y;break;
            case 'S':--pose.y;break;
        }
    }
    //左转函数
    void PoseHandler::TurnLeft()
    {
        switch (pose.heading) {
            case 'E':pose.heading = 'N';break;
            case 'N':pose.heading = 'W';break;
            case 'W':pose.heading = 'S';break;
            case 'S':pose.heading = 'E';break;
        }
    }
    //右转函数
    void ExecutorImpl::TurnRight(){
        switch (pose.heading) {
            case 'E':pose.heading = 'S';break;
            case 'S':pose.heading = 'W';break;
            case 'W':pose.heading = 'N';break;
            case 'N':pose.heading = 'E';break;
        }
    }
    //加速转换指令
    void ExecutorImpl::Fast(){
        fast = !fast;
    }
    //是否加速指令
    bool ExecutorImpl::IsFast(){
        return fast;
    }
    */
    //执行指令
    void ExecutorImpl::Execute(const std::string& commands){
        std::unordered_map<char,std::function<void(PoseHandler& poseHandler)>> cmderMap;
        cmderMap.emplace('M', MoveCommand());
        cmderMap.emplace('L', TurnLeftCommand());
        cmderMap.emplace('R', TurnRightCommand());
        cmderMap.emplace('F', FastCommand());
        
        for (const auto cmd : commands) {
            auto it=cmderMap.find(cmd);
            if(it!=cmderMap.end()){
                it->second(poseHandler);
            }
           /* std::unique_ptr<ICommand> cmder;
            if (cmd == 'M')
                cmder = std::make_unique<MoveCommand>();
            else
                if(cmd == 'L')
                    cmder = std::make_unique<TurnLeftCommand>();
                else
                    if(cmd == 'R')
                        cmder = std::make_unique<TurnRightCommand>();
                    else
                        if(cmd == 'F')
                            cmder = std::make_unique<FastCommand>();
            if(cmder)
                cmder->DoOperate(*this);*/
        }    
    }
    //查询
    Pose ExecutorImpl::Query(void){
        return poseHandler.Query();
    }
};