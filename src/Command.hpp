#pragma once
#include "ExecutorImpl.hpp"
namespace adas{
    class ICommand
    {
    public:
        virtual ~ICommand() = default;
        virtual void DoOperate(ExecutorImpl& executor) = 0;
    };
    // 移动子类
    class MoveCommand final : public ICommand
    {
    public:
        void DoOperate(ExecutorImpl& executor)
        {
            if (executor.IsFast())
                executor.Move();
            executor.Move();
        }
    };
    // 左转子类
    class TurnLeftCommand final : public ICommand
    {
    public:
        void DoOperate(ExecutorImpl& executor)
        {
            if (executor.IsFast())
                executor.Move();
            executor.TurnLeft();
        }
    };
    // 右转子类
    class TurnRightCommand final : public ICommand
    {
    public:
        void DoOperate(ExecutorImpl& executor)
        {
            if (executor.IsFast())
                executor.Move();
            executor.TurnRight();
        }
    };
    // 加速子类
    class FastCommand final : public ICommand
    {
    public:
        void DoOperate(ExecutorImpl& executor)
        {
            executor.Fast();
        }
    };
}