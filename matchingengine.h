#include <iostream>
#include <unordered_map>
#include <vector>
#include "order.h"

class MatchingEngine
{
private: 
    MatchingEngine() = default;
    unordered_map<Order*, int> buy_orders;
    unordered_map<Order*, int> sell_orders;
    vector<Order> order_records;

public:
    //Singleton constructor
    static MatchingEngine& get_instance()
    {
        static MatchingEngine instance;
        return instance;
    } 

    unordered_map<Order*, int> get_buy_orders();

    unordered_map<Order*, int> get_sell_orders();

    vector<Order> get_order_records();

};

namespace std
{
    template<>
    struct hash<Order>
    {
        size_t operator()(const Order& key)
        {

        }
    }
}