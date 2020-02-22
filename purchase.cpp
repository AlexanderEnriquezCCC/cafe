#include "purchase.hpp"

Purchase::Purchase()
{
    this->m_purchaseAmnt = 0;
    this->m_price;
    this->m_purchaseChoice = "";
}

void Purchase::PurchaseOptions() // will need to insert an item here, however price will be based off of item entered (tea/sandwhich/whatever), don't think i need vect
{
    std::cout << "What would you like to buy?" << std::endl;

    switch(m_purchaseChoice)
    {
        case 'Coffee':
        std::cout << "How much coffee would you like to buy?" << std::endl;
        std::cin >> m_purchaseAmnt;
        m_price = m_purchaseAmnt * c.Price;
        std::cout << "You spent $" << m_price << "." << std::endl;
        break;

        case "Burger":
        std::cout << "How many burgers would you like to buy?" << std::endl;
        std::cin >> m_purchaseAmnt;
        m_price = m_purchaseAmnt * b.Price;
        std::cout << "You spent $" << m_price << "." << std::endl;
        break;

        case "Tea":
        std::cout << "How much tea would you like to buy?" << std::endl;
        std::cin >> m_purchaseAmnt;
        m_price = m_purchaseAmnt * t.Price;
        std::cout << "You spent $" << m_price << "." << std::endl;
        break;

        case "Sandwhich":
        std::cout << "How many sandwhiches would you like to buy?" << std::endl;
        std::cin >> m_purchaseAmnt;
        m_price = m_purchaseAmnt * s.Price;
        std::cout << "You spent $" << m_price << "." << std::endl;
        break;

        default:
        std::cout << "That is not an option." << std::endl;
        break;
    }
}