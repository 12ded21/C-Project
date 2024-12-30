#pragma once
#include "PoseHandler.hpp"
namespace adas
{
class ExecutorImpl final : public Executor
{
private:
    PoseHandler poseHandler;
    std::string kind;
    // 接口抽象，虚基类

public:
    explicit ExecutorImpl(const Pose& p = {0, 0, 'N'}, const std::string& kind = "car") noexcept;
    ~ExecutorImpl(void) noexcept = default;

    ExecutorImpl(const Executor&) = delete;
    ExecutorImpl& operator=(const Executor&) = delete;

    void Execute(const std::string& command) noexcept override;
    Pose Query(void) const noexcept override;
};
}  // namespace adas