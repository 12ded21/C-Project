#pragma once
#include <string>
namespace adas{
    struct Pose{
        int x;
        int y;
        char heading;
    };
    class Executor{
    public:
        static Executor * NewExecutor(const Pose& pose={0,0,'N'}) noexcept;
    public:
        Executor(void) = default;
        virtual ~Executor(void) = default;

        Executor(const Executor&) = delete;
        Executor& operator=(const Executor&) = delete;

    public:
        //使用的是基类指针，所以定义虚函数，这样基类指针也可以直接操纵子类的对象
        virtual void Execute(const std::string& command) noexcept = 0;
        virtual Pose Query(void) const noexcept = 0;
    };
};