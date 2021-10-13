template <typename T>
struct BurgerNode
{
    BurgerNode<T> *link;
    T value;
    bool head;

    BurgerNode(): link(nullptr), value(NULL), head(false) {}
    BurgerNode(T key): link(nullptr), value(key), head(false) {}
    BurgerNode(BurgerNode<T> *newLink, T key): link(newLink), value(key), head(false) {}
};