#include <iostream>
#include "matchingengine.h"

unordered_map<Order, int> MatchingEngine::get_buy_orders(){
    return buy_orders;
}

unordered_map<Order, int> MatchingEngine::get_sell_orders(){
    return sell_orders;
}

vector<Order> MatchingEngine::get_order_records(){
    return order_records;
}