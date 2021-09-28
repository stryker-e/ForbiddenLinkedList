#include <cstdlib>
#include "Burger.h"

template <typename T>
class Burger {                 //node in Linked List
    private:
        T patty;                //data stored in Burger node
        Burger<T>* cheese;      //pointer to next Burger node

    public:
        Burger<T>()
        {
            this->patty = NULL;
            this->cheese = NULL;
        }

        Burger<T>(T newPatty)
        {
            this->patty = newPatty;
            this->cheese = NULL;

        }
        void Burger<T>::setPatty(T newPatty)
        {
            this->patty = newPatty;
        }
        void Burger<T>::setCheese(Burger<T> *newCheese)
        {
            this->cheese = newCheese;
        }
        T Burger<T>::getPatty()
        {
            return this->patty;
        }

        Burger<T> * Burger<T>::getCheese()
        {
            return this->cheese;
        }

};
