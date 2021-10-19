/****************************************************************************************************************************
Title        : ArrayBag.cpp
Author       : Giuliani Martinez
Description  : definitions of member functions in arraybag.hpp
Date         :10/18/21
****************************************************************************************************************************/
#include "ArrayBag.hpp"
#include <iostream>

template<typename ItemType>
ArrayBag<ItemType>::ArrayBag(){
    item_count_ = 0;
}

template<typename ItemType>
int ArrayBag<ItemType>::getCurrentSize() const
{
return item_count_;
}

template<typename ItemType>
bool ArrayBag<ItemType>::isEmpty() const
{
return item_count_ == 0;
}

template<typename ItemType>
bool ArrayBag<ItemType>::add(const ItemType& new_entry)
{
bool room_to_add = (item_count_ < DEFAULT_CAPACITY);
if (room_to_add)
{
items_[item_count_] = new_entry;
item_count_++;
}
return room_to_add;
} 

template<typename ItemType>
bool ArrayBag<ItemType>::remove(const ItemType& an_entry)
{
int loc_index = getIndexOf(an_entry);
bool can_remove_item = !isEmpty()&&(loc_index > -1);
if (can_remove_item)
{
item_count_--;
items_[loc_index] = items_[item_count_];
}
return can_remove_item;
}

template<typename ItemType>
void ArrayBag<ItemType>::clear()
{
item_count_ = 0;
} 

template<typename ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& an_entry) const
{
return getIndexOf(an_entry) > -1;
} 

template<typename ItemType>
int ArrayBag<ItemType>::getFrequencyOf(const ItemType& an_entry) const
{ 
 int frequency = 0;
 int current_index = 0;
 while (current_index < item_count_)
 {
    if (items_[current_index] == an_entry)
    {
    frequency++;
    }
    current_index++;
 }
 return frequency;
}

template<typename ItemType>
std::vector<ItemType>
ArrayBag<ItemType>::toVector() const
{
std::vector<ItemType> bag_contents;
for (int i = 0; i < item_count_; i++)
bag_contents.push_back(items_[i]);

 return bag_contents;
} 

template<typename ItemType>
void ArrayBag<ItemType>::display() const{
    for (int i =0; i < item_count_; i++){
        if (i +1 == item_count_){
            std::cout << items_[i] << "\n";
            return;
        }
        std::cout << items_[i] << ", ";
    }
}

template<typename ItemType>
bool ArrayBag<ItemType>::duplicateItems(){
    if(isEmpty() || 2*item_count_ > DEFAULT_CAPACITY){
        return false;
    }
    std::vector<ItemType> bag_contents {toVector()};
    
    for(int i=0; i < bag_contents.size(); i++){
        while(item_count_ <= DEFAULT_CAPACITY){
        add(bag_contents[i]);
    }
    }
    return true;
}

template<typename ItemType>
void ArrayBag<ItemType>::removeAllInstances(const ItemType &an_entry){
    while (contains(an_entry)){
        remove(an_entry);
    }
}

template<typename ItemType>
bool ArrayBag<ItemType>::removeDuplicates(){
    if (item_count_ <= 1) return false;
    for (int i=0; i < item_count_; i++){
            for (int j=i+1; j < item_count_; j++){
                if (items_[i] == items_[j]);
                remove(items_[j]);
            
        }
    }
    return true;
}

template<typename ItemType>
int ArrayBag<ItemType>::getIndexOf(const ItemType &target) const{
    bool found = false;
    int result = -1;
    int search_index = 0;
    while (!found && (search_index < item_count_)) {
        if (items_[search_index] == target) {
        found = true;
        result = search_index;
        }
        else {
        search_index ++;
        }
    }
    return result;
}

template<typename ItemType>
void ArrayBag<ItemType>::operator+=(const ArrayBag<ItemType> &a_bag){
    int copy_index = 0;
    while(item_count_ <= DEFAULT_CAPACITY && !a_bag.isEmpty()){
        add(a_bag.items_[copy_index]);
        copy_index++;
    }
}

template<typename ItemType>
void ArrayBag<ItemType>::operator-=(const ArrayBag<ItemType> &a_bag){
    for(int i=0; i < a_bag.item_count_; i++){
        if(contains(a_bag.items_[i])){
            removeAllInstances(a_bag.items_[i]);
        }
    }
}

template<typename ItemType>
void ArrayBag<ItemType>::operator/=(const ArrayBag<ItemType> &a_bag){
    for(int i=0; i < item_count_; i++){
        if(!a_bag.contains(items_[i])){
            removeAllInstances(items_[i]);
        }
    }
}