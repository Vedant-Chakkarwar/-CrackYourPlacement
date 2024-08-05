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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr1 = head;
        vector<int>ans;
        while(ptr1!= NULL){
            ans.push_back(ptr1->val);
            ptr1 = ptr1 -> next;
        }
        vector<int>ans1 = ans;
        reverse(ans.begin(),ans.end());
        if(ans1 == ans){
            return true;
        }
        return false;

    }
};