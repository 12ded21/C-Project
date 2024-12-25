#pragma once 
#include "Executor.hpp" 
namespace adas{
    class PoseHandler final
    {
    public:
        PoseHandler(const Pose& pose) ;
        PoseHandler(const PoseHandler&) = delete;
        PoseHandler& operator=(const PoseHandler&) = delete;

    public:
        void Move(void) ;
        void TurnLeft(void) ;
        void TurnRight(void) ;
        void Fast(void) ;
        bool IsFast(void) ;
        Pose Query(void) ;

    private:
        Pose pose;
        bool fast{false};
    };
}
