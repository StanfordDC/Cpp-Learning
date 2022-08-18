#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include "type.h"
#include "side.h"
using namespace std;

class Order{
public:
    Order(string name, double price, int quantity, Type type, Side side);

    //Pure virtual functions for subclasses
    virtual void buy(string name, double price, int quantity) const = 0;
    
    virtual void sell(string name, double price, int quantity) const = 0;

    //Getter functions
    string get_name();

    double get_price();

    int get_quantity();

    //Setter functions
    void set_name(string name);

    void set_price(double price);
    
    void set_quantity(int quantity);
    
private:
    string name;
    double price;
    int quantity;
    Type type;
    Side side;
};
#endif