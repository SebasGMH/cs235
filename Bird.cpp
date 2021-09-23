/****************************************************************************************************************************
Title        : Bird.cpp
Author       : Giuliani Martinez
Description  : Definition of Bird.hpp members
Date:9/20/21
****************************************************************************************************************************/

#include "Bird.hpp"
#include <iostream>

Bird::Bird(std::string name, bool domestic, bool predator){
    name_ = name;
    domestic_ = domestic;
    predator_ = predator;
}

bool Bird::isAirborne() const{
    return airborne_;
}

bool Bird::isAquatic() const{
    return aquatic_;
}

void Bird::setAirborne(){
    airborne_ = true;
    return;
}

void Bird::setAquatic(){
    aquatic_ = true;
    return;
}

void Bird::display() {
    if (domestic_ && predator_ && airborne_ && aquatic_ ){
        std::cout << name_ << " is domestic and it is a predator,\nit is airborne and it is aquatic.\n";
    }
    if (~domestic_ && predator_ && airborne_ && aquatic_ ){
        std::cout << name_ << " is not domestic and it is a predator,\nit is airborne and it is aquatic.\n";
    }
    if (~domestic_ && ~predator_ && airborne_ && aquatic_ ){
        std::cout << name_ << " is not domestic and it is not a predator,\nit is airborne and it is aquatic.\n";
    }
    if (~domestic_ && ~predator_ && ~airborne_ && aquatic_ ){
        std::cout << name_ << " is not domestic and it is not a predator,\nit is not airborne and it is aquatic.\n";
    }
    if (~domestic_ && ~predator_ && ~airborne_ && ~aquatic_ ){
        std::cout << name_ << " is not domestic and it is not a predator,\nit is not airborne and it is not aquatic.\n";
    }
    if (domestic_ && ~predator_ && ~airborne_ && ~aquatic_ ){
        std::cout << name_ << " is domestic and it is not a predator,\nit is not airborne and it is not aquatic.\n";
    }
    if (domestic_ && predator_ && ~airborne_ && ~aquatic_ ){
        std::cout << name_ << " is domestic and it is a predator,\nit is not airborne and it is not aquatic.\n";
    }
    if (domestic_ && predator_ && airborne_ && ~aquatic_ ){
        std::cout << name_ << " is domestic and it is a predator,\nit is airborne and it is not aquatic.\n";
    }
    if (domestic_ && ~predator_ && airborne_ && ~aquatic_ ){
        std::cout << name_ << " is domestic and it is not a predator,\nit is airborne and it is not aquatic.\n";
    }
    if (domestic_ && ~predator_ && ~airborne_ && aquatic_ ){
        std::cout << name_ << " is domestic and it is not a predator,\nit is not airborne and it is aquatic.\n";
    }
    if (~domestic_ && predator_ && airborne_ && ~aquatic_ ){
        std::cout << name_ << " is not domestic and it is a predator,\nit is airborne and it is not aquatic.\n";
    }
    if (~domestic_ && predator_ && ~airborne_ && aquatic_ ){
        std::cout << name_ << " is not domestic and it is a predator,\nit is not airborne and it is aquatic.\n";
    }
    if (~domestic_ && predator_ && ~airborne_ && ~aquatic_ ){
        std::cout << name_ << " is not domestic and it is a predator,\nit is not airborne and it is not aquatic.\n";
    }
    if (~domestic_ && ~predator_ && airborne_ && ~aquatic_ ){
        std::cout << name_ << " is not domestic and it is not a predator,\nit is airborne and it is not aquatic.\n";
    }
    return;
}