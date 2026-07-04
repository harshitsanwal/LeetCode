/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head==NULL)
    return head;
    else{
     struct ListNode *ptr=head;
     struct ListNode *prev=NULL;
     while(ptr!=NULL)
     {  
        if(ptr->val!=val)
        {   prev=ptr;
            ptr=ptr->next;
        }
        else{struct ListNode *temp=ptr;
            if(prev==NULL)
            head=ptr->next;
            else
            prev->next=temp->next;
            ptr=ptr->next;
            free(temp);
        }
     }
    }
    return head;
}