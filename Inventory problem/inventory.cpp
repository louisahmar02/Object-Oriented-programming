#include<iostream>
#include "inventory.h"
using namespace std;

Inventory::Inventory(){
    itemNumber = 0;
    quantity = 0;
    cost = 0.0;
    totalCost = 0.0;
}
Inventory::Inventory(int _itemNumber, Double _cost, int quantity){
    
    setTotalCost(int _quantity, double _cost);
}
void Inventory::setQuantity(int _itemNumber){
    itemNumber = _itemNumber;
}
void Iventory::setItemNumber(int _itemNumber){
    itemNumber = _itemNumber;
}
int Inventory::getItemNumber() const{return itemNumber;}
int getQuantity() const {return quantity;}
double getCost() const {return cost;}
double getTotalCost() const {return totalCost;}
