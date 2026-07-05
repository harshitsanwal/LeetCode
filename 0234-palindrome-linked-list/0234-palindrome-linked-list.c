/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
int arr[100000],k=0;
struct ListNode* ptr=head;
while(ptr!=NULL)
{
    arr[k]=ptr->val;
    k++;
    ptr=ptr->next;
}
for(int i=0;i<k;i++)
{
    if(arr[i]!=arr[k-1-i])
    return 0;
}
return 1;
}