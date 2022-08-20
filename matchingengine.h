#include <iostream>
#include <unordered_map>
#include "order.h"

class MatchingEngine
{
private: 
    MatchingEngine() = default;
    unordered_map<Order, int> buyOrders;
    unordered_map<Order, int> sellOrders;
    vector<Order> orderRecords;

public:
    //Singleton constructor
    static MatchingEngine& getInstance(){
        static MatchingEngine instance;
        return instance;
    } 

    unordered_map<Order, int> getBuyOrders();

    unordered_map<Order, int> getSellOrders();

    vector<Order> getOrderRecords();

};