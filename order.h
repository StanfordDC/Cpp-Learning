#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include "type.h"
#include "side.h"
#include "status.h"
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

    Type get_type();

    Side get_side();

    Status get_status();

    //Setter functions
    void set_price(double price);
    
    void set_quantity(int quantity);

    void set_type(Type type);

    void set_side(Side side);

    void set_status(Status status);
    
private:
    string name;
    double price;
    int quantity;
    Type type;
    Side side;
    Status status;
};
#endif