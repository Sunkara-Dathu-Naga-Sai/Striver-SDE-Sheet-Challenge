#include <bits/stdc++.h>
LinkedListNode<int>* removeKthNode(LinkedListNode<int>* head, int K)
{  
 if(head==NULL||K==0) return head;
    LinkedListNode<int>*  slow=head;
    LinkedListNode<int>*  fast=head;
    for(int i=1;i<=K;i++)
    {
        if(fast==NULL) return head;
        fast=fast->next;
    }
    if(fast==NULL)
    {
        head=head->next;

        return head;
    }
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    LinkedListNode<int>* todelete = slow->next;
    slow->next=slow->next->next;
    delete todelete;
    return head;
}