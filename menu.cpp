#include "menu.hpp"


Menu::Menu()
{
    this->m_userChoice = 0;
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
    std::cout << "---------------------------" << std::endl;
    for(int x = 0; x > m_name.size(); x++)
    {
        std::cout << x << ". " << m_name[x] << ":  $" << m_price[x] << "\n" << std::endl;
    }
    std::cout << "---------------------------" << std::endl;
    std::cout << "Please choose a number of what you would like." << std::endl;
    std::cin >> m_userChoice;

    switch (m_userChoice)
    {
    case 1:
        p->PurchaseOptions(*b);
        break;
    
    case 2:
        p->PurchaseOptions(*c);
        break;
    
    case 3:
        p->PurchaseOptions(*s);
        break;
    
    case 4:
        p->PurchaseOptions(*t);
        break;
    

    default:
    std::cout << "That is not a valid choice... Please choose again." << std::endl;
    Display();
        break;
    }

}