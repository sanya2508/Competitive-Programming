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
class Solution {
public:
    void reorderList(ListNode* head) {
        if ((!head) || (!head->next) || (!head->next->next)) return; 
        vector<ListNode*>res;
        ListNode* p=head;
        while(p!=NULL)
        {
            res.push_back(p);
            p=p->next;
        }
        int l=0; int r=res.size()-1;
        ListNode* pr=head;
        while(l<=r)
        {
            if(l==r)
            {  
                pr->next=res[l];
                pr=pr->next;
                break;
            }    
            pr->next=res[l];
            pr=pr->next;
            pr->next=res[r];
            pr=pr->next;
            l++;
            r--;
        }
        pr->next=NULL;
    }
};
