#ifndef inventory_h
#define inventory_h
class Inventory {
    int itemNumber{};
    int quantity{};
    double cost{};
    double totalCost{};
    public:

    Inventory(){
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }
    Inventory(int, double, int);
    void setItemNumber(int _itemNumber){
        itemNumber = _itemNumber;
    }
    void setQuantity(int _quantity){
        quantity = _quantity;
        
    }
    void setCost(double _cost){
        cost = _cost;
    }
    void setTotalCost(int _quantity, double _cost){
        totalCost = _quantity * _cost;
    }
    int getItemNumber() const{return itemNumber;}
    int getQuantity() const {return quantity;}
    double getCost() const {return cost;}
    double getTotalCost() const {return totalCost;}


};