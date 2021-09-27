#include <cstdlib>
#include "Burger.h"

template <typename T>
class Burger {                 //node in Linked List
    private:
        T patty;                //data stored in Burger node
        Burger<T>* cheese;      //pointer to next Burger node

    public:
        void initBurger(T newPatty)
        void setPatty(T newPatty);
        void setCheese(Burger<T> *newCheese);
        T getPatty();
        Burger<T> *getCheese();
};

template <typename T>
void Burger<T>::initBurger(T newPatty)
{
    this->patty = 

}

template <typename T>
void Burger<T>::setPatty(T newPatty)
{
    this->patty = newPatty;
}

template <typename T>
void Burger<T>::setCheese(Burger<T> *newCheese)
{
    this->cheese = newCheese;
}

template <typename T>
T Burger<T>::getPatty()
{
    return this->patty;
}

template <typename T>
Burger<T> * Burger<T>::getCheese()
{
    return this->cheese;
}

