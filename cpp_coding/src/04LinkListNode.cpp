template <typename T>
class Node {
public:
    T val;
    Node<T> *next;
    Node<T> *prev;
    Node(T val) : val(val), next(nullptr), prev(nullptr) {}
    Node(Node<T> *prev, T val, Node<T> *next) : val(val), next(next), prev(prev) {}
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
