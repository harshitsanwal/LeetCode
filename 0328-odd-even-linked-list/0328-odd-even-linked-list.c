struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL)
        return head;
    else{
        struct ListNode* ptr=head;          
        struct ListNode* even=head->next;   
        struct ListNode* orignal=even;      

        while(even!=NULL && even->next!=NULL)
        {
            ptr->next=even->next;   
            ptr=ptr->next;          

            even->next=ptr->next;  
            even=even->next;       
        }

        ptr->next=orignal;         

        return head;
    }
}