/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* temp = A;  
    ListNode* next = NULL;  
    ListNode* prev = NULL;  
    int count = 0;  
    while (temp != NULL && count < 2)  
    {  
        next = temp->next;  
        temp->next = prev;  
        prev = temp;  
        temp = next;  
        count++;  
    }  
    if (next != NULL)  
    A->next = swapPairs(next);  
      return prev;  
}  
