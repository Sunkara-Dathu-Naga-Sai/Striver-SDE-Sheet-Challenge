#include <bits/stdc++.h> 
Node *findMiddle(Node *head) {
    // Write your code here
    Node *slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}