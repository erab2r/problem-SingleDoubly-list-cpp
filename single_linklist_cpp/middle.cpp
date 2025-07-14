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

int link_list_size(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_middle(Node* head) {
    int size = link_list_size(head);
    Node* temp = head;

    if (size == 0) {
        cout << "List is empty." << endl;
        return;
    }

    if (size % 2 == 1) {
        for (int i = 0; i < size / 2; i++) {
            temp = temp->next;
        }
        cout << "Middle element: " << temp->val << endl;
    } else {
        for (int i = 0; i < size / 2 - 1; i++) {
            temp = temp->next;
        }
        cout << "Middle elements: " << temp->val << " and " << temp->next->val << endl;
    }
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
    print_middle(head);

    return 0;
}
