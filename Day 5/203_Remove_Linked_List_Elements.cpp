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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* ptr = dummy;

        while(ptr -> next !=NULL){
            if(ptr -> next -> val == val){
                ListNode* temp = ptr -> next;
                ptr -> next  = ptr -> next -> next;
                delete temp;
            }else{
                ptr = ptr -> next;
            }
        }

        ListNode* ans = dummy -> next;
        delete dummy;
        return ans;
    }
};