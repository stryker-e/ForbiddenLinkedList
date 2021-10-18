#include <iostream>
#include <cstdlib>

#include "BurgerList.h"

int main()
{
    int key = 0;
    bool rt = true;
    auto list = new BurgerList<int>();
    key = 5;
    rt = list->BurgerList<int>::push_back(key);
    key = 10;
    rt = list->BurgerList<int>::push_back(key);
    list->BurgerList<int>::printList();
}
