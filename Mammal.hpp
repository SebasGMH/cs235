/****************************************************************************************************************************
Title        : Mammal.hpp
Author       : Giuliani Martinez
Description  : Header file for the Mammal class
Date:9/20/21
****************************************************************************************************************************/
#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.hpp"

class Mammal:public Animal{
    public:
    Mammal();
    Mammal(std::string name, bool domestic = false, bool predator = false);
    bool hasHair() const;
    bool isAirborne() const;
    bool isAquatic() const;
    bool isToothed() const;
    bool hasFins() const;
    bool hasTail() const;
    int legs() const;
    void setHair();
    void setAirborne();
    void setAquatic();
    void setToothed();
    void setFins();
    void setTail();
    void setLegs(int legs);
    /** @post displays bird data in the form:
    "animal_name is [not] domestic and [it is / is not] a predator,\n
    it is [not] airborne and it is [not] aquatic,\n
    it has [no] hair, [no] teeth, [no] fins, [no] tail and legs_ legs.\n”
    */
    void display() override;

    protected:
    bool hair_;
    bool airborne_;
    bool aquatic_;
    bool toothed_;
    bool fins_;
    bool tail_;
    int legs_;


};
#endif