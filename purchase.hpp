#ifndef PURCHASE_H
#define PURCHASE_H
#include <string>
#include "items.hpp"

class Purchase
{
    private:
    int m_purchaseAmnt;
    double m_price;
    std::string m_purchaseChoice;

    public:
    Purchase();

    void PurchaseOptions(Items i);
};

#endif