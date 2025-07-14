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
    int count = 0;
    while (temp != NULL) {
        count++;
        cout << temp->val << endl;
        temp = temp->next;
    }
    cout << "Size of linked list: " << count << endl;
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
    return 0;
}
