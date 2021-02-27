/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// Approach 1

#include<bits/stdc++.h>
class Solution {
public:
    void reverse(ListNode*&head){
        ListNode*C = head;
        ListNode*P = NULL;
        ListNode*N;
        while(C!=NULL){
        N = C->next;
        C->next = P;
        P = C;
        C= N;
    }
    head = P;
    }
    
    int itr=0;
    int i=0;
    int ans=0;
    int getDecimalValue(ListNode* head) {
        reverse(head);
        while(head!=NULL){
        itr= pow(2,i)*(head->val);
        head = head->next;
        ans = ans+itr;
        i++;
    }
    return ans;
    }
};


// Approach 2
class Solution {
public:
    int getDecimalValue(ListNode* head){
        if(head==NULL) return 0;
        int ans=0;
        while(head){
            if(head->val==0)ans=ans*2;
            else ans=ans*2+1;
            head=head->next;
        }
        return ans;
    }
};
