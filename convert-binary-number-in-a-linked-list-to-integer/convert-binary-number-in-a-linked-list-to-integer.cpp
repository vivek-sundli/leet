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
    void helper(ListNode* head,int &ans,int &place){
        if(head == NULL){
            return;
        }
        helper(head->next,ans,place);
        if(head->val == 1){
            ans += pow(2,place);
        }
        place++;
        head = head->next;
    }
    
    int getDecimalValue(ListNode* head) {
        int ans =0;
        int place =0;
        helper(head,ans,place);
        return ans;
    }
};