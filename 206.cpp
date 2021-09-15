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
    ListNode* reverseList(ListNode* head) {
        //ListNode* traverse=head->next;
        if(!head || !head->next){
            return head;
        }
        ListNode* prev = NULL,next=head->next,curr=head;
        while(next){
            //prev->next= curr;
            //prev->next=curr;
            curr->next=prev;
            prev=curr;
            curr=next;
            next=next->next;
            
        }
        curr->next=prev;
        return curr;
    }
};
