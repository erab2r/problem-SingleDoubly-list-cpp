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
bool duplicate_found(Node* &head){
    int freq[101] = {0};
    Node*temp = head;
    while (temp != NULL)
    {
        freq[temp->val]++;
        if(freq[temp->val]>1){
            return true;
        }
        temp = temp->next;
    }
    return false;
    
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }

        Node* newNode = new Node(val);

        if (head == NULL) {        
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    print_link_list(head);
    if(duplicate_found(head)){
        cout << "Yes" <<endl;
    }
    else{
        cout << "No" <<endl;
    }
    return 0;
}
