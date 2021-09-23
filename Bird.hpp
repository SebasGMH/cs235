/****************************************************************************************************************************
Title        : Bird.hpp
Author       : Giuliani Martinez
Description  : Header file for the Bird class
Date: 9/20/21
****************************************************************************************************************************/
#ifndef BIRD_H
#define BIRD_H
#include "Animal.hpp"


class Bird:public Animal{
    protected:
    bool airborne_;
    bool aquatic_;

    public:
    Bird(); //default constructor
    Bird(std::string name, bool domestic = false, bool predator = false); //parameterized constructor
    /** Checks to see if Bird airborne_ is true
    @return airborne_
    */
    bool isAirborne() const;
    /** Checks to see if Bird aquatic_ is true
    @return aquatic_
    */
    bool isAquatic() const;
    /** Mutates airborne_ and sets it to true
    @post airborne_ is set to true
    */
    void setAirborne();
    /** Mutates aquatic_ and sets it to true
    @post aquatic_ is set to true
    */
    void setAquatic();
    /** @post displays bird data in the form:
    “animal_name is [not] domestic and [it is / is not] a predator,\n
    it is [not] airborne and it is [not] aquatic.\n”
    */
    void display() override;

};
#endif