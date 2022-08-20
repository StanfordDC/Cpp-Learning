#include "order.h"

Order::Order(string name, double price, int quantity, Type type, Side side)
{
    this->name = name;
    this->price = price;
    this->quantity = quantity;
    this->type = type;
    this->side = side;
    status = PENDING;
}

string Order::get_name()
{
        return name;
}

double Order::get_price()
{
    return price;
}
int Order::get_quantity()
{
    return quantity;
}

Type Order::get_type()
{
    return type;
}

Side Order::get_side()
{
    return side;
}

Status Order::get_status()
{
    return status;
}

void Order::set_price(double price)
{
    this->price = price;
}

void Order::set_quantity(int quantity)
{
    this->quantity = quantity;
}

void Order::set_type(Type type)
{
    this->type = type;
}

void Order::set_side(Side side)
{
    this->side = side;
}

void Order::set_status(Status status)
{
    this->status = status;
}
