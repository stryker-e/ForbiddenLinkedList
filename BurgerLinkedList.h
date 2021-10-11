template <typename T>
class BurgerLinkedList {
    private:
        Burger<T> *topBun;
        Burger<T> *bottomBun;
        int burgerQty;
    public:
        void setTopBun(Burger<T>* newTop);
        void setBottomBun(Burger<T>* newBottom);
        void setBurgerQty(int burgerAmt);
        Burger<T>* getTopBun();
        Burger<T>* getBottomBun();
        int getBurgerQty();
        Burger<T>();
        bool addBurger(T pattyData);
        //TODO
        /*bool addFront(T pattyData);
        bool search(Burger<T> *topBun_, T pattyData);
        bool deleteBurger(Burger<T> **topBun_, Burger<T> *targetCheese);
        bool reverse(Burger<T> **topBun_);
        bool copy(Burger<T> *targetCheese, Burger<T> temp_);
        bool compare(Burger<T> *patty1, Burger<T> *patty2);
        bool deleteList(Burger<T> **topBun_);
        bool display(Burger<T> *topBun_);*/

};