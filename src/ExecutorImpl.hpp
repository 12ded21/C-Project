#pragma once
#include"..\include\Executor.hpp"
namespace adas{
    class ExecutorImpl final : public Executor{
    private:
        Pose pose;
        //接口抽象，虚基类
    private:
        class ICommand{
        public :
            virtual ~ICommand() = default;
            virtual void DoOperate(ExecutorImpl & executor) = 0;
        };
        //三个子类
        class MoveCommand final:public ICommand{
        public:
            void DoOperate(ExecutorImpl& executor){
                executor.Move();
            }
        };
        class TurnLeftCommand final:public ICommand{
        public :
            void DoOperate(ExecutorImpl & executor){
                executor.TurnLeft();
            }
        };
        class TurnRightCommand final:public ICommand{
        public :
            void DoOperate(ExecutorImpl & executor){
                executor.TurnRight();
            }
        };

    private:
        void Move(void);
        void TurnLeft(void);
        void TurnRight(void);
    public:
        ExecutorImpl(const Pose& p = {0,0,'N'});
        ~ExecutorImpl(void) = default;

        ExecutorImpl(const Executor&) = delete;
        ExecutorImpl& operator=(const Executor&) = delete;

        void Execute(const std::string& command);
        Pose Query(void);
    };
}
