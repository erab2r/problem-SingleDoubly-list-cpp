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
void insert_at_anypos(Node* &head,int idx,int val){
    Node* newNode = new Node(val);
    Node*temp = head;
    for(int i =1;i<idx;i++){
        temp = temp->next;
        if(temp == NULL){
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
 
}


int main() {
    Node* head = new Node(30);
    Node* a = new Node(20);
    Node* tail = new Node(50);
    head->next = a;
    a->next = tail;
   insert_at_anypos(head,10,100);    

    print_link_list(head);
    return 0;
}