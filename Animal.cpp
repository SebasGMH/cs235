/****************************************************************************************************************************
Title        : Animal.cpp
Author       : Giuliani Martinez
Description  : Definition of Animal.hpp members
Date         :9/20/21
****************************************************************************************************************************/
#include "Animal.hpp"

Animal::Animal(std::string name, bool domestic, bool predator){
    name_ = name;
    domestic_ = domestic;
    predator_ = predator;
}

std::string Animal::getName() const{
    return name_;
}

bool Animal::isDomestic() const{
    return domestic_;
}

bool Animal::isPredator() const{
    return predator_;
}

void Animal::setName(std::string name){
    name_ = name;
    return;
}

void Animal::setDomestic(){
    domestic_ = true;
    return;
}

void Animal::setPredator(){
    predator_ = true;
    return;
}