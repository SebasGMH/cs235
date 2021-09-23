/****************************************************************************************************************************
Title        : Fish.cpp
Author       : Giuliani Martinez
Description  : Definition of Fish.hpp members
Date:9/20/21
****************************************************************************************************************************/
#include "Fish.hpp"
#include <iostream>

Fish::Fish(std::string name, bool domestic, bool predator){
    name_ = name;
    domestic_ = domestic;
    predator_ = predator;
}

bool Fish::isVenomous() const{
    return venomous_;
}

void Fish::setVenomous() {
    venomous_ = true;
    return;
}

void Fish::display(){
    std::cout<< name_;
    if (domestic_)
        std::cout<< " is domestic, ";
    else if (~domestic_)
        std::cout<< " is not domestic, ";
    if (predator_)
        std::cout<< "it is a predator\n";
    else if(~predator_)
        std::cout<<"it is not a predator\n";
    if (venomous_)
        std::cout<<"and it is venomous.\n";
    else if(~venomous_)
        std::cout<<"and it not venomous.\n";
    return;
}