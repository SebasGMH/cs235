/****************************************************************************************************************************
Title        : Mammal.cpp
Author       : Giuliani Martinez
Description  : Definition of Mammal.hpp members
Date:9/20/21
***********************************************************/
#include "Mammal.hpp"
#include <iostream>

Mammal::Mammal(std::string name, bool domestic, bool predator){
    name_ = name;
    domestic_ = domestic;
    predator_ = predator;
}

bool Mammal::hasHair() const{
    return hair_;
}

bool Mammal::isAirborne() const{
    return airborne_;
}

bool Mammal::isAquatic() const{
    return aquatic_;
}

bool Mammal::isToothed() const{
    return toothed_;
}

bool Mammal::hasFins() const{
    return fins_;
}

bool Mammal::hasTail() const{
    return tail_;
}

int Mammal::legs() const{
    return legs_;
}

void Mammal::setHair(){
    hair_ = true;
    return;
}

void Mammal::setAirborne(){
    airborne_ = true;
    return;
}

void Mammal::setAquatic(){
    aquatic_ = true;
    return;
}

void Mammal::setToothed(){
    toothed_ = true;
    return;
}

void Mammal::setFins(){
    fins_ = true;
    return;
}

void Mammal::setTail(){
    tail_ = true;
    return;
}

void Mammal::setLegs(int legs){
    legs_ = legs;
    return;
}

void Mammal::display(){
    std::cout<< name_;
    if (domestic_)
        std::cout<< " is domestic";
    else if (~domestic_)
        std::cout<< " is not domestic";
    if (predator_)
        std::cout<< " and it is a predator,\n";
    else if(~predator_)
        std::cout<<" and it is not a predator,\n";
    if (airborne_)
        std::cout<< "it is airborne";
    else if(~airborne_)
        std::cout<<"it is not airborne";
    if (aquatic_)
        std::cout<< " and it is aquatic,\n";
    else if(~aquatic_)
        std::cout<<" and it is not aquatic,\n";
    if (hair_)
        std::cout<< "it has hair,";
    else if(~hair_)
        std::cout<<"it has no hair,";
    if (toothed_)
        std::cout<< " teeth,";
    else if(~toothed_)
        std::cout<<" no teeth,";
    if (fins_)
        std::cout<< " fins,";
    else if(~fins_)
        std::cout<<" no fins,";
    if (tail_)
        std::cout<< " tail and " << legs_ << " legs.\n" ;
    else if(~tail_)
        std::cout<<" no tail and " << legs_ << " legs.\n";
    return;

}
    