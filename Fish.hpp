/****************************************************************************************************************************
Title        : Fish.hpp
Author       : Giuliani Martinez
Description  : Header file for the Fish class
Date:9/20/21
****************************************************************************************************************************/
#ifndef FISH_H
#define FISH_H
#include "Animal.hpp"

class Fish:public Animal{
    public:
    Fish(); //default constructor
    Fish(std::string name, bool domestic = false, bool predator = false); //parameterized constructor
    /** Checks to see if venomous_ is true
    @return venomous_
    */
    bool isVenomous() const;
    /** Mutates venomous_ and sets it to true
    @post venomous_ is set to true
    */
    void setVenomous();
    /** @post displays fish data in the form:
    "animal_name is [not] domestic, [it is / is not] a predator\n
    and it is [not] venomous.\n"
    */
    void display() override;

    protected:
    bool venomous_;

};
#endif