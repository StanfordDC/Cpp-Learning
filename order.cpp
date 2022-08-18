#include "order.h"
#include "side.h"
#include "type.h"

Order::Order(string name, double price, int quantity, Type type, Side side){
    this->name = name;
    this->price = price;
    this->quantity = quantity;
    this->type = type;
    this->side = side;
}

string Order::get_name(){
        return name;
}

double Order::get_price(){
    return price;
}
int Order::get_quantity(){
    return quantity;
}

void Order::set_name(string name) {
    this->name = name;
}

void Order::set_price(double price) {
    this->price = price;
}

void Order::set_quantity(int quantity){
    this->quantity = quantity;
}
