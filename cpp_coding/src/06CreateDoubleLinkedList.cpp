#include <iostream>
#include <vector>

using namespace std;

class DoubleLinkedList {
  public:
    int val;
    DoubleLinkedList *next, *prev;
    DoubleLinkedList(int val) : val(val), next(nullptr), prev(nullptr) {}

    DoubleLinkedList *createDoubleLinkedList(vector<int> &arr) {
        if (arr.empty()) return nullptr;

        DoubleLinkedList *head = new DoubleLinkedList(arr[0]);
        DoubleLinkedList *current = head;

        for (int i = 1; i < arr.size(); i++) {
            DoubleLinkedList *newNode = new DoubleLinkedList(arr[i]);
            current->next = newNode;
            newNode->prev = current;
            current = newNode;
        }
        return head;
    }
};

int main() {
    // 创建一条双链表
    vector<int> arr = {1, 2, 3, 4, 5};
    DoubleLinkedList *head = new DoubleLinkedList(0);
    head = head->createDoubleLinkedList(arr);
    DoubleLinkedList *tail = nullptr;

    // 从头节点向后遍历双链表
    for (DoubleLinkedList *current = head; current != nullptr; current = current->next) {
        cout << current->val << " ";
        tail = current;
    }
    cout << endl;

    //从尾节点向前遍历双链表
    for (DoubleLinkedList *current = tail; current != nullptr; current = current->prev) {
        cout << current->val << " ";

    }
    cout << endl;

    // 在双链表头部插入新节点 0
    DoubleLinkedList *newNode = new DoubleLinkedList(0);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    // 从头节点向后遍历双链表
    for (DoubleLinkedList *current = head; current != nullptr; current = current->next) {
        cout << current->val << " ";
        
    }
    cout << endl;

    // 在双链表尾部插入新元素
    tail->next = new DoubleLinkedList(6);
    tail->next->prev = tail;

    // 从头节点向后遍历双链表
    for (DoubleLinkedList *current = head; current != nullptr; current = current->next) {
        cout << current->val << " ";
    }
    cout << endl;

    // 在双链表中间插入新元素
    DoubleLinkedList *p = head;
    for (int i = 0; i < 2; i++) {
        p = p->next;
    }

    DoubleLinkedList *middleNode = new DoubleLinkedList(66);
    middleNode->next = p->next;
    middleNode->prev = p;
    //插入新节点
    p->next->prev = middleNode;
    p->next = middleNode;

    // 从头节点向后遍历双链表
    for (DoubleLinkedList *current = head; current != nullptr; current = current->next) {
        cout << current->val << " ";
    }
    cout << endl;

    // 删除第 4 个节点
// 先找到第 3 个节点
    DoubleLinkedList *p1 = head;
    for (int i = 0; i < 3; i++) {

        p1 = p1->next;

    }
    p1->next = p1->next->next;
    p1->next->prev = p1;

    // 从头节点向后遍历双链表
    for (DoubleLinkedList *current = head; current != nullptr; current = current->next) {
        cout << current->val << " ";
    }
    cout << endl;

    




    return 0;
}
