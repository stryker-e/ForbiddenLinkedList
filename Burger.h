template <typename T>
class Burger {                 //node in Linked List
    private:
        T patty;                //data stored in Burger node
        Burger<T>* cheese;      //pointer to next Burger node

    public:
        void setPatty(T newPatty);
        void setCheese(Burger<T>* newCheese);
        T getPatty();
        Burger<T>* getCheese();
};