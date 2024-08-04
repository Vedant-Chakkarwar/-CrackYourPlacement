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
private:
    vector<int> listtoarray(ListNode *head){
        vector<int>ans;
        ListNode *current = head;
        while(current != NULL){
            ans.push_back(current -> val);
            current = current -> next;
        }
        return ans;
    }
public:
    int getDecimalValue(ListNode* head) {
        vector<int>bin = listtoarray(head);
        int ans=0;
        for(int i=0;i<bin.size();i++){
            ans+=bin[i]*pow(2,bin.size()-1-i);
            //cout<<bin[i]<<" ";
        }
        return ans;
    }
};