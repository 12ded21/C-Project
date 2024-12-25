#include"..\include\Executor.hpp"
namespace adas{
    class ExecutorImpl final : public Executor{
    private:
        Pose pose;
    private:
        void Move(void);
    public:
        ExecutorImpl(const Pose& p = {0,0,'N'});
        ~ExecutorImpl(void) = default;

        ExecutorImpl(const Executor&) = delete;
        ExecutorImpl& operator=(const Executor&) = delete;

        void Execute(const std::string& command);
        Pose Query(void);
    };
}
