class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* temp = head;
        vector<int> ans;
        while (temp != nullptr) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        reverse(ans.begin() + left - 1, ans.begin() + right);
        

        ListNode* dummy = new ListNode(0);
        ListNode* temp2 = dummy;
        for (int i = 0; i < ans.size(); i++) {
            temp2->next = new ListNode(ans[i]);
            temp2 = temp2->next;
        }
        

        ListNode* newHead = dummy->next;
        delete dummy; 
        return newHead;
    }
};
