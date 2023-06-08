#include <bits/stdc++.h> 
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *newHead=NULL;
    while(head!=NULL)
    {
        LinkedListNode<int>* next=head->next;
        head->next=newHead;
        newHead=head;
        head=next;
    }
    return newHead;
}