#ifndef BurgerList_h
#define BurgerList_h

#include "BurgerNode.cpp"
#include <iostream>

template <typename T>

class BurgerList {

    public:
        //constructors
        BurgerList(T key_, BurgerNode<T> *link_);
        ~BurgerList();

        //modifiers
        bool push_back(T key);
        bool pop_back();
        bool insert(size_t layer, T key);
        bool remove(size_t layer);

        //util
        bool isEmpty();
        void printList();
        

    private:
        BurgerNode<T> *topBun;
        BurgerNode<T> *bottomBun;
        size_t size;
};

template <typename T>
BurgerList<T>::BurgerList(T key_, BurgerNode<T> *link_) {
    BurgerNode<T> *t_head = BurgerNode<T>();
    BurgerNode<T> *t_tail = BurgerNode<T>();

    topBun = t_head;
    bottomBun = t_tail;
    topBun->link = bottomBun;

    size++;
}

//TODO
template <typename T>
bool BurgerList<T>::isEmpty() {
    return (size_t == 0);
}

template <typename T>
void BurgerList<T>::printList() {
    if(this.isEmpty())
    {
        std::cout << "List is empty.\n";
    }
    else
    {
        auto temp = topBun;
        int count = 0;
        while(temp)
        {
            std::cout << "Node " << count << ": " << temp->value << "\n";
        }
    }
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
    if(topBun->link == nullptr)
    {
        delete topBun;
        topBun = NULL;
        size = 0;
    }
    else
    {
        BurgerNode<T> *temp = topBun;
        BurgerNode<T> *prev = new BurgerNode<T>();

        while(temp->link != nullptr)
        {
            prev = temp;
            temp = temp->link;
        }   
        prev->link = nullptr;
        bottomBun = prev;
        delete temp;
        size--;
        return true;
    }

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