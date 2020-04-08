#include "purchase.hpp"

Purchase::Purchase()
{
    this->m_purchaseAmnt = 0;
    this->m_price = 0;
}

void Purchase::PurchaseOptions(Items i) // will need to insert an item here, however price will be based off of item entered (tea/sandwhich/whatever), don't think i need vect
{
    std::cout << "What would you like to buy?" << std::endl;
    std::cin >> m_purchaseAmnt;
    m_price = m_purchaseAmnt * i.Price;
    std::cout << "You've spent $" << m_price << "." << std::endl;
}