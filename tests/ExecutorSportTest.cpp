#include <gtest/gtest.h>

#include <memory>

#include "Executor.hpp"
#include "PoseEq.hpp"
// #include <tuple>
namespace adas
{
// M
TEST(ExecutorSportTest, should_return_x_plus_2_given_command_is_M_and_facing_is_E)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'E'}, "sport"));

    // when
    executor->Execute("M");
    // then
    const Pose target({2, 0, 'E'});
    ASSERT_EQ(target, executor->Query());
}

TEST(ExecutorSportTest, should_return_x_minus_2_given_command_is_M_and_facing_is_W)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'W'}, "sport"));
    // when
    executor->Execute("M");
    // then
    const Pose target({-2, 0, 'W'});
    ASSERT_EQ(target, executor->Query());
}

TEST(ExecutorSportTest, should_return_y_plus_2_given_command_is_M_and_facing_is_N)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'N'}, "sport"));
    // when
    executor->Execute("M");
    // then
    const Pose target({0, 2, 'N'});
    ASSERT_EQ(target, executor->Query());
}

TEST(ExecutorSportTest, should_return_y_minus_2_given_command_is_M_and_facing_is_S)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'S'}, "sport"));
    // when
    executor->Execute("M");
    // then
    const Pose target({0, -2, 'S'});
    ASSERT_EQ(target, executor->Query());
}
// R
TEST(ExecutorSportTest, should_return_y_minus_1_facing_S_given_command_is_R_and_facing_is_E)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'E'}, "sport"));
    // when
    executor->Execute("R");
    // then
    const Pose target({0, -1, 'S'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorSportTest, should_return_x_minus_1_facing_W_given_command_is_R_and_facing_is_S)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'S'}, "sport"));
    // when
    executor->Execute("R");
    // then
    const Pose target({-1, 0, 'W'});
    ASSERT_EQ(target, executor->Query());
}

TEST(ExecutorSportTest, should_return_y_plus_1_facing_N_given_command_is_R_and_facing_is_W)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'W'}, "sport"));
    // when
    executor->Execute("R");
    // then
    const Pose target({0, 1, 'N'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorSportTest, should_return_x_plus_1_facing_E_given_command_is_R_and_facing_is_N)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'N'}, "sport"));
    // when
    executor->Execute("R");
    // then
    const Pose target({1, 0, 'E'});
    ASSERT_EQ(target, executor->Query());
}
// L
TEST(ExecutorSportTest, should_return_y_plus_1_facing_N_given_command_is_L_and_facing_is_E)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'E'}, "sport"));
    // when
    executor->Execute("L");
    // then
    const Pose target({0, 1, 'N'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorSportTest, should_return_x_minus_1_facing_W_given_command_is_L_and_facing_is_N)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'N'}, "sport"));
    // when
    executor->Execute("L");
    // then
    const Pose target({-1, 0, 'W'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorSportTest, should_return_y_minus_1_facing_S_given_command_is_L_and_facing_is_W)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'W'}, "sport"));
    // when
    executor->Execute("L");
    // then
    const Pose target({0, -1, 'S'});
    ASSERT_EQ(target, executor->Query());
}
TEST(ExecutorSportTest, should_return_x_plus_1_facing_E_given_command_is_L_and_facing_is_S)
{
    // given
    std::unique_ptr<Executor> executor(Executor::NewExecutor({0, 0, 'S'}, "sport"));
    // when
    executor->Execute("L");
    // then
    const Pose target({1, 0, 'E'});
    ASSERT_EQ(target, executor->Query());
}
}  // namespace adas