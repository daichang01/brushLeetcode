#include <iostream>
#include <stdexcept>

// 定义一个模板类，用于实现链表
template <typename E>
class MyLinkedList2 {
private:
    // 节点结构
    struct Node {
        E val;
        Node* next;

        Node(E value) : val(value), next(nullptr) {}
    };

    Node* head;
    // 实际的尾部节点引用
    Node* tail;
    int size_;

public:
    // 构造函数，初始化链表
    MyLinkedList2() {
        head = new Node(E());
        tail = head;
        size_ = 0;
    }

    // 在链表头部添加元素
    void addFirst(E e) {
        Node* newNode = new Node(e);
        newNode->next = head->next;
        head->next = newNode;
        if (size_ == 0) {
            tail = newNode;
        }
        size_++;
    }

    // 在链表尾部添加元素
    void addLast(E e) {
        Node* newNode = new Node(e);
        tail->next = newNode;
        tail = newNode;
        size_++;
    }

    // 在指定位置添加元素
    void add(int index, E element) {
        checkPositionIndex(index);

        if (index == size_) {
            addLast(element);
            return;
        }

        Node* prev = head;
        for (int i = 0; i < index; i++) {
            prev = prev->next;
        }
        Node* newNode = new Node(element);
        newNode->next = prev->next;
        prev->next = newNode;
        size_++;
    }

    // 删除链表头部元素
    E removeFirst() {
        if (isEmpty()) {
            throw std::out_of_range("No elements to remove");
        }
        Node* first = head->next;
        head->next = first->next;
        if (size_ == 1) {
            tail = head;
        }
        size_--;
        E val = first->val;
        delete first;
        return val;
    }

    // 删除链表尾部元素
    E removeLast() {
        if (isEmpty()) {
            throw std::out_of_range("No elements to remove");
        }

        Node* prev = head;
        while (prev->next != tail) {
            prev = prev->next;
        }
        E val = tail->val;
        delete tail;
        prev->next = nullptr;
        tail = prev;
        size_--;
        return val;
    }

    // 删除指定位置的元素
    E remove(int index) {
        checkElementIndex(index);

        Node* prev = head;
        for (int i = 0; i < index; i++) {
            prev = prev->next;
        }

        Node* nodeToRemove = prev->next;
        prev->next = nodeToRemove->next;
        // 删除的是最后一个元素
        if (index == size_ - 1) {
            tail = prev;
        }
        size_--;
        E val = nodeToRemove->val;
        delete nodeToRemove;
        return val;
    }

    // ***** 查 *****

    // 获取链表头部元素
    E getFirst() {
        if (isEmpty()) {
            throw std::out_of_range("No elements in the list");
        }
        return head->next->val;
    }

    // 获取链表尾部元素
    E getLast() {
        if (isEmpty()) {
            throw std::out_of_range("No elements in the list");
        }
        return getNode(size_ - 1)->val;
    }

    // 获取指定位置的元素
    E get(int index) {
        checkElementIndex(index);
        Node* p = getNode(index);
        return p->val;
    }

    // ***** 改 *****

    // 修改指定位置的元素
    E set(int index, E element) {
        checkElementIndex(index);
        Node* p = getNode(index);

        E oldVal = p->val;
        p->val = element;

        return oldVal;
    }

    // ***** 其他工具函数 *****
    // 获取链表长度
    int size() {
        return size_;
    }

    // 判断链表是否为空
    bool isEmpty() {
        return size_ == 0;
    }

private:
    // 判断索引位置是否可以存在元素
    bool isElementIndex(int index) {
        return index >= 0 && index < size_;
    }

    // 判断索引位置是否可以添加元素
    bool isPositionIndex(int index) {
        return index >= 0 && index <= size_;
    }

    // 检查 index 索引位置是否可以存在元素
    void checkElementIndex(int index) {
        if (!isElementIndex(index)) {
            throw std::out_of_range("Index: " + std::to_string(index) + ", size_: " + std::to_string(size_));
        }
    }

    // 检查 index 索引位置是否可以添加元素
    void checkPositionIndex(int index) {
        if (!isPositionIndex(index)) {
            throw std::out_of_range("Index: " + std::to_string(index) + ", size_: " + std::to_string(size_));
        }
    }

    // 返回 index 对应的 Node
    // 注意：请保证传入的 index 是合法的
    Node* getNode(int index) {
        Node* p = head->next;
        for (int i = 0; i < index; i++) {
            p = p->next;
        }
        return p;
    }
};

int main() {
    MyLinkedList2<int> list;
    list.addFirst(1);
    list.addFirst(2);
    list.addLast(3);
    list.addLast(4);
    list.add(2, 5);

    std::cout << list.removeFirst() << std::endl; // 2
    std::cout << list.removeLast() << std::endl; // 4
    std::cout << list.remove(1) << std::endl; // 5

    std::cout << list.getFirst() << std::endl; // 1
    std::cout << list.getLast() << std::endl; // 3
    std::cout << list.get(1) << std::endl; // 3

    return 0;
}