// Take a singly linked list as input, then print the maximum value of them.
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_mx_value(Node* head)
{   int mx = INT_MIN;
    Node* tmp = head;
    while(tmp != NULL)
    {   if(tmp->val > mx){
           mx = tmp->val;
    }
        tmp = tmp->next;
    }
    cout << mx << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    print_mx_value(head);
    return 0;
}