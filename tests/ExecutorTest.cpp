#include "Executor.hpp"
#include "PoseEq.hpp"
#include <gtest/gtest.h>
#include <memory>
//#include <tuple>
namespace adas {
// M
TEST(ExecutorTest, should_return_x_plus_1_given_command_is_M_and_facing_is_E) {
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'E'}, "car"));

    // when
    executor->Execute("M");
    // then
    const Pose target({1, 0, 'E'});
    ASSERT_EQ(target, executor->Query());
}

TEST(ExecutorTest, should_return_x_minus_1_given_command_is_M_and_facing_is_W) {
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'W'}, "car"));
    // when
    executor->Execute("M");
    // then
    const Pose target({-1, 0, 'W'});
    ASSERT_EQ(target, executor->Query());
}

TEST(ExecutorTest, should_return_y_plus_1_given_command_is_M_and_facing_is_N) {
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'N'}, "car"));
    // when
    executor->Execute("M");
    // then
    const Pose target({0, 1, 'N'});
    ASSERT_EQ(target, executor->Query());
}

TEST(ExecutorTest, should_return_y_minus_1_given_command_is_M_and_facing_is_S) {
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'S'}, "car"));
    // when
    executor->Execute("M");
    // then
    const Pose target({0, -1, 'S'});
    ASSERT_EQ(target, executor->Query());
}
// R
TEST(ExecutorTest, should_return_facing_S_given_command_is_R_and_facing_is_E)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'E'}, "car"));
    // when
    executor->Execute("R");
    // then
    const Pose target({0, 0, 'S'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorTest, should_return_facing_W_given_command_is_R_and_facing_is_S)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'S'}, "car"));
    // when
    executor->Execute("R");
    // then
    const Pose target({0, 0, 'W'});
    ASSERT_EQ(target, executor->Query());
}

TEST(ExecutorTest, should_return_facing_N_given_command_is_R_and_facing_is_W)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'W'}, "car"));
    // when
    executor->Execute("R");
    // then
    const Pose target({0, 0, 'N'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorTest, should_return_facing_E_given_command_is_R_and_facing_is_N)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'N'}, "car"));
    // when
    executor->Execute("R");
    // then
    const Pose target({0, 0, 'E'});
    ASSERT_EQ(target, executor->Query());
}
//L
TEST(ExecutorTest, should_return_facing_N_given_command_is_L_and_facing_is_E)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'E'}, "car"));
    // when
    executor->Execute("L");
    // then
    const Pose target({0, 0, 'N'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorTest, should_return_facing_W_given_command_is_L_and_facing_is_N)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'N'}, "car"));
    // when
    executor->Execute("L");
    // then
    const Pose target({0, 0, 'W'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorTest, should_return_facing_S_given_command_is_L_and_facing_is_W)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'W'}, "car"));
    // when
    executor->Execute("L");
    // then
    const Pose target({0, 0, 'S'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorTest, should_return_facing_E_given_command_is_L_and_facing_is_S)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'S'}, "car"));
    // when
    executor->Execute("L");
    // then
    const Pose target({0, 0, 'E'});
    ASSERT_EQ(target, executor->Query());
}
}