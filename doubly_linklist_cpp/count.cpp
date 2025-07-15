#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;       
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int get_size_doubly(Node* head) {
    int count = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head1, tail1, val);
    }

    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head2, tail2, val);
    }

    int size1 = get_size_doubly(head1);
    int size2 = get_size_doubly(head2);

    if (size1 == size2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
