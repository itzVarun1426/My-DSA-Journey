#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};
void printList(Node* head) {
    while (head != nullptr) {
        cout << " " << head->data;
        head = head->next;
    }
    cout << "\n";
}
int main() {
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(6);
    cout << "Linked List:";
    printList(head);
    return 0;
}