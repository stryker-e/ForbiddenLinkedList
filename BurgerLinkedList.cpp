#include <cstdlib>
#include "BurgerLinkedList.h"

template <typename T>
class BurgerLinkedList {
    private:
        Burger<T> *topBun;
        Burger<T> *bottomBun;
        int burgerQty;
    public:
        void setTopBun(Burger<T> *topBun_) {
            this->topBun = topBun_;

        }

        void setBottomBun(Burger<T> *bottomBun_) {
            this->bottomBun = bottomBun_;

        }

        void setBurgerQty(int burgerAmt) {
            this->burgerQty = burgerAmt;

        }

        Burger<T>* getTopBun() {
            return this->topBun;

        }

        Burger<T>* getBottomBun() {
            return this->bottomBun;

        }

        int getBurgerQty() {
            return this->burgerQty;
            
        }

        BurgerLinkedList<T>() {
            topBun = NULL;
            bottomBun = NULL;
        }

        bool addBurger(T pattyData) {
        //add a new burger onto the end of the list
        // T pattyData : data for new Burger node
        // return : true if newBurger node was successfully added to linked list
            Burger<T> *newBurger = new Burger<T>(pattyData);

            Burger<T> *cur = topBun;        //cursor burger node for list traversal
            while(cur) 
            {
                if(cur->cheese == NULL)     //append burger node at end of list
                {
                    cur->cheese = newBurger;
                }
                cur = cur->cheese;
            }

            return true;
        }

        //TODO
        /*bool addFront(T pattyData) {
        //add a new Burger onto the front of the list
        // T pattyData : data for new Burger node
        // return : true if newBurger node was successfully added to the front of linked list
            Burger<T> *newBurger = new Burger<T>(pattyData);
            newBurger->cheese = *topBun;


            return true;
        }

        bool search(Burger<T> *topBun_, T pattyData) {

            return true;
        }

        bool deleteBurger(Burger<T> **topBun_, Burger<T> *targetCheese) {
            
            return true;
        }

        bool reverse(Burger<T> **topBun_) {

            return true;
        }

        bool copy(Burger<T> *targetCheese, Burger<T> temp_) {

            return true;
        }

        bool compare(Burger<T> *patty1, Burger<T> *patty2) {

            return true;
        }

        bool deleteList(Burger<T> **topBun_) {

            return true;
        }

        bool display(Burger<T> *topBun_) {

            return true;
        }*/













};