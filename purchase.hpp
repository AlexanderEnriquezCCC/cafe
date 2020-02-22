#ifndef PURCHASE_H
#define PURCHASE_H
#include <vector>
#include <string>
#include "items.hpp"
#include "burger.hpp"
#include "coffee.hpp"
#include "sandwhich.hpp"
#include "tea.hpp"

class Purchase
{
    private:
    Burger * b = new Burger();
    Coffee * c = new Coffee();
    Sandwhich * s = new Sandwhich();
    Tea * t = new Tea();
    int m_purchaseAmnt;
    double m_price;
    std::string m_purchaseChoice;

    public:
    Purchase();

    void PurchaseOptions();
};

#endif