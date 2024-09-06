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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(),nums.end());
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp!=nullptr){
            if (st.find(temp->val) != st.end()) {
                if (prev == nullptr) {  
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
                ListNode* curr = temp;
                temp = temp->next;
                delete curr; 
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};