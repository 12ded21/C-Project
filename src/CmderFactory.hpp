#pragma once
#include <functional>
#include <list>
#include <unordered_map>

#include "ActionGroup.hpp"
#include "Command.hpp"
namespace adas
{
using Cmder = std::function<ActionGroup(PoseHandler& poseHandler)>;
using CmderList = std::list<Cmder>;

class CmderFactory final
{
public:
    CmderFactory(void) = default;
    ~CmderFactory(void) noexcept = default;
    CmderFactory(const CmderFactory&) noexcept = delete;
    CmderFactory& operator=(const CmderFactory&) noexcept = delete;

public:
    CmderList GetCmders(const std::string& commands, const std::string& kind) const noexcept;

private:
    std::string ParseCommandString(std::string_view commands) const noexcept;
    void ReplaceAll(std::string& inout, std::string_view what, std::string_view with) const noexcept;
    const std::unordered_map<char, Cmder>& FindMap(const std::string& kind) const noexcept;

private:
    const std::unordered_map<std::string, std::unordered_map<char, Cmder>> cmderMap{{"car",
                                                                                     {
                                                                                         {'M', MoveCommand_car()},
                                                                                         {'L', TurnLeftCommand_car()},
                                                                                         {'R', TurnRightCommand_car()},
                                                                                         {'F', FastCommand_car()},
                                                                                         {'B', ReverseCommand_car()},
                                                                                         {'Z', TurnRoundCommand_car()},
                                                                                     }},
                                                                                    {"sport",
                                                                                     {
                                                                                         {'M', MoveCommand_sport()},
                                                                                         {'L', TurnLeftCommand_sport()},
                                                                                         {'R', TurnRightCommand_sport()},
                                                                                     }},
                                                                                    {"bus",
                                                                                     {
                                                                                         {'M', MoveCommand_bus()},
                                                                                         {'L', TurnLeftCommand_bus()},
                                                                                         {'R', TurnRightCommand_bus()},
                                                                                     }}};
};
}  // namespace adas
