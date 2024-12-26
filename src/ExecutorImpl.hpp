#pragma once
#include"PoseHandler.hpp"
namespace adas{
    class ExecutorImpl final : public Executor{
    private:
        PoseHandler poseHandler;
    //接口抽象，虚基类
    public:
        /*void Move(void) noexcept;
        void TurnLeft(void) noexcept;
        void TurnRight(void) noexcept;
        void Fast(void) noexcept;
        bool IsFast(void) noexcept;*/

    public:
        explicit ExecutorImpl(const Pose& p = {0,0,'N'}) noexcept;
        ~ExecutorImpl(void) noexcept = default;

        ExecutorImpl(const Executor&) = delete;
        ExecutorImpl& operator=(const Executor&) = delete;

        void Execute(const std::string& command) noexcept override;
        Pose Query(void)const noexcept override;
    };
}
