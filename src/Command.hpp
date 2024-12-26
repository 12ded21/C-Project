#pragma once
#include <functional>

#include "ActionGroup.hpp"
#include "ExecutorImpl.hpp"
#include "PoseHandler.hpp"
namespace adas
{
class MoveCommand final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        const auto action =
            poseHandler.IsReverse() ? ActionType::BACKWARD_1_STEP_ACTION : ActionType::FORWARD_1_STEP_ACTION;
        if (poseHandler.IsFast()) {
            actionGroup.PushAction(action);
        }
        actionGroup.PushAction(action);
        return actionGroup;
    }
};
// 左转子类
class TurnLeftCommand final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        const auto action = poseHandler.IsReverse() ? ActionType::REVERSE_TURNLEFT_ACTION : ActionType::TURNLEFT_ACTION;
        if (poseHandler.IsFast()) {
            actionGroup.PushAction(poseHandler.IsReverse() ? ActionType::BACKWARD_1_STEP_ACTION
                                                           : ActionType::FORWARD_1_STEP_ACTION);
        }
        actionGroup.PushAction(action);
        return actionGroup;
    }
};
// 右转子类
class TurnRightCommand final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        const auto action =
            poseHandler.IsReverse() ? ActionType::REVERSE_TURNRIGHT_ACTION : ActionType::TURNRIGHT_ACTION;
        if (poseHandler.IsFast()) {
            actionGroup.PushAction(poseHandler.IsReverse() ? ActionType::BACKWARD_1_STEP_ACTION
                                                           : ActionType::FORWARD_1_STEP_ACTION);
        }
        actionGroup.PushAction(action);
        return actionGroup;
    }
};
// 加速子类
class FastCommand final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        const auto action = ActionType::BE_FAST_ACTION;
        actionGroup.PushAction(action);
        return actionGroup;
    }
};
// 倒车子类
class ReverseCommand final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        const auto action = ActionType::BE_REVERSE_ACTION;
        actionGroup.PushAction(action);
        return actionGroup;
    }
};
// 掉头子类
class TurnRoundCommand final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        if (poseHandler.IsReverse()) {
            return ActionGroup();
        }
        if (poseHandler.IsFast()) {
            return ActionGroup({ActionType::FORWARD_1_STEP_ACTION, ActionType::TURNLEFT_ACTION,
                                ActionType::FORWARD_1_STEP_ACTION, ActionType::TURNLEFT_ACTION});
        }
        return ActionGroup(
            {ActionType::TURNLEFT_ACTION, ActionType::FORWARD_1_STEP_ACTION, ActionType::TURNLEFT_ACTION});
    }
};
} 