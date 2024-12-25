#pragma once
#include"PoseHandler.hpp"
namespace adas{
    class ExecutorImpl final : public Executor{
    private:
        PoseHandler poseHandler;
    //接口抽象，虚基类
    public:
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
