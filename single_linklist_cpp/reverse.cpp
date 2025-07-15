// Take a singly linked list as input and print the reverse of the linked list.
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

void reverse_link_list(Node* head)
{
    Node* tmp = head;
    if(tmp == NULL)
    {
        return;
    }
    reverse_link_list(tmp->next);
    cout << tmp->val <<" ";
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
    reverse_link_list(head);
 
    return 0;
}