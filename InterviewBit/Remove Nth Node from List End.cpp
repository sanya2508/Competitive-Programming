/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
     int l=0;
    ListNode *temp=A;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    if(B>=l){
        ListNode* x=A;
        A=A->next;
        free(x);
        return A;
    }
    temp=A;
    for(int i=0;i<l-B-1;i++){
  //  cout<<temp->val<<endl;
     temp=temp->next;
    }
    ListNode* y=temp->next;
    temp->next=y->next;
    free(y);
    return A;
    
}
