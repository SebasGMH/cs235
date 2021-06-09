/****************************************************************************************************************************
Title        : atm.cpp
Author       : Giuliani Martinez
Description  : Implementation file for the ATM class
****************************************************************************************************************************/

#include "atm.h"

ATM::ATM(){
    Balance = 0;
    trans = "";
}

int ATM::getBalance(){
    trans = "\nCurrent Balance: " + std::to_string(Balance);
    transHistory.push_back(trans);
    return Balance;
}

int ATM::deposit(int amount){
    if (amount <= 0)
        return -1;
    Balance = Balance + amount;
    trans = "\n+ " + std::to_string(amount);
    transHistory.push_back(trans);
    return Balance;
}

int ATM::withdraw(int amount){
    if (amount > Balance){
        trans = "\nInvalid Withdrawal Amount: " + std::to_string(amount);
        transHistory.push_back(trans);
        return -1;
        }
    Balance = Balance - amount;
    trans = "\n- " + std::to_string(amount);
    transHistory.push_back(trans);
    return Balance;
}

std::string ATM::getTransactionString(){
    std::string history;
    for (int i = 0 ; i < transHistory.size(); i++){
        //std::cout << transHistory[i] << std::endl;
        history = history + transHistory[i];
    }
    return history;
    
}