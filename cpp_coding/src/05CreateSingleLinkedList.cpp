#include <iostream>
#include <vector>

using namespace std;

class ListNode {
  public:
    int val;
    ListNode *next;
    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

ListNode *createSingleLinkedList(vector<int> nums) {
    if (nums.empty()) { return nullptr; }
    ListNode *head = new ListNode(nums[0]);
    ListNode *cur = head;
    for (int i = 1; i < nums.size(); i++) {
        cur->next = new ListNode(nums[i]);
        cur = cur->next;
    }
    return head;
}

int main() {
    ListNode *head = createSingleLinkedList({1, 2, 3, 4, 5});

    for (ListNode *cur = head; cur != nullptr; cur = cur->next) {
        cout << cur->val << " ";
    }
    cout << endl;
    // 在单链表头部插入新元素
    ListNode *newNode = new ListNode(0);
    newNode->next = head;
    head = newNode;

    for (ListNode *cur = head; cur != nullptr; cur = cur->next) {
        cout << cur->val << " ";
    }
    cout << endl;

    // 在单链表尾部插入新元素
    ListNode *tail = head;
    while (tail->next != nullptr) { tail = tail->next; }
    tail->next = new ListNode(6);

    for (ListNode *cur = head; cur != nullptr; cur = cur->next) {
        cout << cur->val << " ";
    }
    cout << endl;

    // 在单链表中间插入新元素
    // 在第 3 个节点后面插入一个新节点 66
    // 先要找到前驱节点，即第 3 个节点
    ListNode *mid = head;
    for (int i = 0; i < 2; i++) { 
        mid = mid->next; 

    }
    ListNode *newMid = new ListNode(66);
    newMid->next = mid->next;
    mid->next = newMid;

    for (ListNode *cur = head; cur != nullptr; cur = cur->next) {
        cout << cur->val << " ";

    }
    cout << endl;
    // 在单链表中删除一个节点
    // 删除第 4 个节点，要操作前驱节点
    ListNode *pre = head;
    for (int i = 0; i < 2; i++) {
        pre = pre->next;
    }
    ListNode *delNode = pre->next;
    pre->next = delNode->next;
    delete delNode;

    for (ListNode *cur = head; cur != nullptr; cur = cur->next) {
        cout << cur->val << " ";
    }
    cout << endl;
    // 在单链表尾部删除元素
    ListNode* p = head;
    while (p->next->next != nullptr) {
    
        /* code */
        p = p->next;
    }
    p->next = nullptr;
    


    return 0;
}