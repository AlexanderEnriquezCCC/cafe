#include "menu.hpp"


Menu::Menu()
{

}

void Menu::addToPriceVect()
{
    m_price.push_back(b->Price);
    m_price.push_back(c->Price);
    m_price.push_back(s->Price);
    m_price.push_back(t->Price);
}

void Menu::addToNameVect()
{
    m_name.push_back(b->Name);
    m_name.push_back(c->Name);
    m_name.push_back(s->Name);
    m_name.push_back(t->Name);
}

void Menu::Display()
{
    std::cout << "------------------------------------" << std::endl;
    for(x = 0; x > m_name.size(); x++)
    {
        std::cout << m_name[x] << ": " << m_price[x] << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    p->PurchaseOptions();
}