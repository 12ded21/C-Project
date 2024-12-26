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
                poseHandler.IsReverse() ? poseHandler.Backward() : poseHandler.Forward();
            }
            poseHandler.IsReverse() ? poseHandler.Backward() : poseHandler.Forward();
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
                poseHandler.IsReverse() ? poseHandler.Backward() : poseHandler.Forward();
            }
            poseHandler.IsReverse() ? poseHandler.TurnRight() : poseHandler.TurnLeft();
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
                poseHandler.IsReverse() ? poseHandler.Backward() : poseHandler.Forward();
            }
            poseHandler.IsReverse() ? poseHandler.TurnLeft() : poseHandler.TurnRight();
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
    //倒车子类
    class ReverseCommand final
    {
    public:
        void operator()(PoseHandler& poseHandler) const noexcept
        {
            poseHandler.Reverse();
        }
    };
}