/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* head=A;
    if(head==NULL){
        return head;
    }
    
    ListNode* neww=NULL;
    while(head->next != NULL){
    if(head->val == head->next->val){
        neww= head->next->next;
        delete(head->next);
        head->next=neww;
    }
    else{
        head=head->next;
    }
    }
    return A;
}
