#pragma once
#include<functional>
#include "ExecutorImpl.hpp"
#include "PoseHandler.hpp"
namespace adas{
    /*class ICommand
    {
    public:
        virtual ~ICommand() = default;
        virtual void DoOperate(PoseHandler& poseHandler) = 0;
    };*/
    // 移动子类
    class MoveCommand final //: public ICommand
    {
    public:
        /*void DoOperate(PoseHandler& poseHandler)
        {
            if (poseHandler.IsFast())
                poseHandler.Move();
            poseHandler.Move();
        }*/
        /*const std::function<void(PoseHandler& poseHandler)> operate = [](PoseHandler& poseHandler) {
            if (poseHandler.IsFast())
            {
                poseHandler.Move();
            }
            poseHandler.Move();
        };*/
        void operator()(PoseHandler& poseHandler) 
        {
            if (poseHandler.IsFast())
            {
                poseHandler.Move();
            }
            poseHandler.Move();
        }
    };
    // 左转子类
    class TurnLeftCommand final //: public ICommand
    {
    public:
        /*void DoOperate(PoseHandler& poseHandler)
        {
            if (poseHandler.IsFast())
                poseHandler.Move();
            poseHandler.TurnLeft();
        }*/
        /*const std::function<void(PoseHandler& poseHandler)> operate = [](PoseHandler& poseHandler) {
            if (poseHandler.IsFast())
            {
                poseHandler.Move();
            }
            poseHandler.TurnLeft();
        };*/
        void operator()(PoseHandler& poseHandler)
        {
            if (poseHandler.IsFast())
            {
                poseHandler.Move();
            }
            poseHandler.TurnLeft();
        }
    };
    // 右转子类
    class TurnRightCommand final //: public ICommand
    {
    public:
        /*void DoOperate(PoseHandler& poseHandler)
        {
            if (poseHandler.IsFast())
                poseHandler.Move();
            poseHandler.TurnRight();
        }*/
        /*const std::function<void(PoseHandler& poseHandler)> operate = [](PoseHandler& poseHandler) {
            if (poseHandler.IsFast())
            {
                poseHandler.Move();
            }
            poseHandler.TurnRight();
        };*/
        void operator()(PoseHandler& poseHandler)
        {
            if (poseHandler.IsFast())
            {
                poseHandler.Move();
            }
            poseHandler.TurnRight();
        }
    };
    // 加速子类
    class FastCommand final //: public ICommand
    {
    public:
        /*void DoOperate(PoseHandler& poseHandler)
        {
            poseHandler.Fast();
        }*/
        /*const std::function<void(PoseHandler& poseHandler)> operate = [](PoseHandler& poseHandler) {
            poseHandler.Fast();
        };*/
        void operator()(PoseHandler& poseHandler)
        {
            poseHandler.Fast();
        }
    };
}