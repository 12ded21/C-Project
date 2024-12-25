//.hpp文件用于声明；.cpp文件用于定义函数；名字空间可区分不同的开发者
#include"ExecutorImpl.hpp"
#include<iostream>
namespace adas{
    //新建一个对象，返回的是基类的指针
    Executor* Executor::NewExecutor(const Pose& p){
        return new ExecutorImpl(p);
    }
    //构造函数
    ExecutorImpl::ExecutorImpl(const Pose& p){
        pose.heading = p.heading;
        pose.x = p.x;
        pose.y = p.y;
    }
    //移动函数
    void ExecutorImpl::Move(){
        switch (pose.heading) {
            case 'E': ++pose.x;break;
            case 'W':--pose.x;break;
            case 'N':++pose.y;break;
            case 'S':--pose.y;break;
        }
    }
    //左转函数
    void ExecutorImpl::TurnLeft(){
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
    //执行指令
    void ExecutorImpl::Execute(const std::string& commands){
        for (const auto cmd : commands) {
            switch(cmd){
                case 'M':
                    Move();
                    break;
                case 'L':
                    TurnLeft();
                    break;
                case 'R':
                    TurnRight();
                    break;
            }
        }    
    }
    //查询
    Pose ExecutorImpl::Query(void){
        /*std::cout<<"The location of the vehicle is ( "<<pose.x<<" , "<<pose.y<<")"<<endl;
        std::cout<<"The heading of the vehicle is "<<pose.heading<<endl;*/
        return pose;
    }
};