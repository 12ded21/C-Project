#pragma once
#include <functional>

#include "ActionGroup.hpp"
#include "ExecutorImpl.hpp"
#include "PoseHandler.hpp"
namespace adas
{
// 汽车移动子类
class MoveCommand_car final
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
// 汽车左转子类
class TurnLeftCommand_car final
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
// 汽车右转子类
class TurnRightCommand_car final
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
// 汽车加速子类
class FastCommand_car final
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
// 汽车倒车子类
class ReverseCommand_car final
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
// 汽车掉头子类
class TurnRoundCommand_car final
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


// 跑车移动子类
// 一次移动2格
class MoveCommand_sport final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        actionGroup.PushAction(ActionType::FORWARD_1_STEP_ACTION);
        actionGroup.PushAction(ActionType::FORWARD_1_STEP_ACTION);
        return actionGroup;
    }
};
// 跑车左转子类
// 先左转再前进
class TurnLeftCommand_sport final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        actionGroup.PushAction(ActionType::TURNLEFT_ACTION);
        actionGroup.PushAction(ActionType::FORWARD_1_STEP_ACTION);
        return actionGroup;
    }
};
// 跑车右转子类
// 先右转再前进
class TurnRightCommand_sport final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        actionGroup.PushAction(ActionType::TURNRIGHT_ACTION);
        actionGroup.PushAction(ActionType::FORWARD_1_STEP_ACTION);
        return actionGroup;
    }
};


// 公交车移动子类
// 一次移动1格
class MoveCommand_bus final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        actionGroup.PushAction(ActionType::FORWARD_1_STEP_ACTION);
        return actionGroup;
    }
};
// 公交车左转子类
// 先前进再左转
class TurnLeftCommand_bus final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        actionGroup.PushAction(ActionType::FORWARD_1_STEP_ACTION);
        actionGroup.PushAction(ActionType::TURNLEFT_ACTION);
        return actionGroup;
    }
};
// 公交车右转子类
// 先前进再右转
class TurnRightCommand_bus final
{
public:
    ActionGroup operator()(PoseHandler& poseHandler) const noexcept
    {
        ActionGroup actionGroup;
        actionGroup.PushAction(ActionType::FORWARD_1_STEP_ACTION);
        actionGroup.PushAction(ActionType::TURNRIGHT_ACTION);
        return actionGroup;
    }
};
}  // namespace adas