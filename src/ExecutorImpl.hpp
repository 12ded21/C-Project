#pragma once
#include"..\include\Executor.hpp"
namespace adas{
    class ExecutorImpl final : public Executor{
    private:
        Pose pose;
        bool fast{false};
    //接口抽象，虚基类
    private:
        class ICommand{
        public :
            virtual ~ICommand() = default;
            virtual void DoOperate(ExecutorImpl & executor) = 0;
        };
        //移动子类
        class MoveCommand final:public ICommand{
        public:
            void DoOperate(ExecutorImpl& executor){
                if(executor.IsFast())
                    executor.Move();
                executor.Move();
            }
        };
        //左转子类
        class TurnLeftCommand final:public ICommand{
        public :
            void DoOperate(ExecutorImpl & executor){
                if (executor.IsFast())
                    executor.Move();
                executor.TurnLeft();
            }
        };
        //右转子类
        class TurnRightCommand final:public ICommand{
        public :
            void DoOperate(ExecutorImpl & executor){
                if (executor.IsFast())
                    executor.Move();
                executor.TurnRight();
            }
        };
        //加速子类
        class FastCommand final : public ICommand{
        public:
            void DoOperate(ExecutorImpl& executor){
                executor.Fast();
            }
        };

    private:
        void Move(void);
        void TurnLeft(void);
        void TurnRight(void);
        void Fast(void);
        bool IsFast(void);
    public:
        ExecutorImpl(const Pose& p = {0,0,'N'});
        ~ExecutorImpl(void) = default;

        ExecutorImpl(const Executor&) = delete;
        ExecutorImpl& operator=(const Executor&) = delete;

        void Execute(const std::string& command);
        Pose Query(void);
    };
}
