/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(head==NULL)
    return head;
    else{
        struct ListNode dummy;
      dummy.next = head;
    struct ListNode* prev = &dummy;
    struct ListNode* beg = head;
    int pos=1;
    while (pos < left) {
        prev = beg;
        beg = beg->next;
        pos++;
    }
    struct ListNode* end=beg;
    int count=right-left;
    while(count>0){
        end=end->next;
        count--;
    }
    struct ListNode* last=end->next;
    struct ListNode* cptr=beg;
    struct ListNode* nptr;
    struct ListNode* pptr=last;
    while(cptr!=last){
        nptr=cptr->next;
        cptr->next=pptr;
        pptr=cptr;
        cptr=nptr;
    }  
    prev->next=end;
    return dummy.next;
}
    
}