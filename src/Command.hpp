#pragma once
#include<functional>
#include "ExecutorImpl.hpp"
#include "PoseHandler.hpp"
namespace adas{
    class MoveCommand final
    {
    public:
        void operator()(PoseHandler& poseHandler) const noexcept 
        {
            if (poseHandler.IsFast())
            {
                poseHandler.Move();
            }
            poseHandler.Move();
        }
    };
    // 左转子类
    class TurnLeftCommand final 
    {
    public:
        void operator()(PoseHandler& poseHandler) const noexcept
        {
            if (poseHandler.IsFast())
            {
                poseHandler.Move();
            }
            poseHandler.TurnLeft();
        }
    };
    // 右转子类
    class TurnRightCommand final 
    {
    public:
        void operator()(PoseHandler& poseHandler) const noexcept
        {
            if (poseHandler.IsFast())
            {
                poseHandler.Move();
            }
            poseHandler.TurnRight();
        }
    };
    // 加速子类
    class FastCommand final 
    {
    public:
        void operator()(PoseHandler& poseHandler) const noexcept
        {
            poseHandler.Fast();
        }
    };

}