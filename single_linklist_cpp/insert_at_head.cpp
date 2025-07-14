#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void print_link_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
void insert_at_head(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

int main() {
    Node* head = new Node(30);
    Node* a = new Node(20);
    Node* tail = new Node(50);
    head->next = a;
    a->next = tail;
    insert_at_head(head,100);    

    print_link_list(head);
    return 0;
}
