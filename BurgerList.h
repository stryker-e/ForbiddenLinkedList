#ifndef BurgerList_h
#define BurgerList_h

#include "BurgerNode.cpp"
#include <iostream>

template <typename T>
class BurgerList {

    public:
        //constructors
        BurgerList<T>();
        ~BurgerList<T>();

        //modifiers
        bool push_back(T key);
        bool pop_back();
        bool insert(size_t layer, T key);
        bool remove(size_t layer);

        //util
        bool isEmpty();
        

    private:
        BurgerNode<T> *topBun;
        BurgerNode<T> *bottomBun;
        size_t size;
};

template <typename T>
BurgerList<T>::BurgerList<T>() {
    auto *t_head = BurgerNode<T>();
    auto *t_tail = BurgerNode<T>();

    topBun = t_head;
    bottomBun = t_tail;
    topBun->link = bottomBun;

    size++;
}

//TODO
template <typename T>
bool BurgerList<T>::isEmpty() {
    if(size_t == 0)
}

//insert at tail
template <typename T>
bool BurgerList<T>::push_back(T key) {
    auto *temp = BurgerNode<T>(key);
    
    if(topBun == nullptr) {
        topBun = temp;
        topBun->head = true;
    }
    else {
        bottomBun->link = temp;
        bottomBun = temp;
    }
    size++;
    return true;
}

//remove at tail
template <typename T>
bool BurgerList<T>::pop_back() {


}

//insert at index layer
template <typename T>
bool BurgerList<T>::insert(size_t layer, T key) {



}

//remove at index layer
template <typename T>
bool BurgerList<T>::remove(size_t layer) {
    if(layer > size) {
        std::cout << "Invalid index. Remove operation unsuccessful.\n";
        return false;
    }
    else {
        for(size_t i = 0; i < size; i++) {

        } 
    }


}

#endif /*BurgerList*/