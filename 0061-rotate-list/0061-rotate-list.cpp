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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr || k == 0)
            return head;

        vector<int> ans;
        ListNode* temp = head;

        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int n = ans.size();

        k = k % n;

        if(k == 0)
            return head;

        vector<int> ans1(n);

        for(int i = 0; i < n; i++){
            ans1[(i + k) % n] = ans[i];
        }

        ListNode* dummy = new ListNode(ans1[0]);
        ListNode* tail = dummy;

        for(int i = 1; i < n; i++){
            tail->next = new ListNode(ans1[i]);
            tail = tail->next;
        }

        return dummy;
    }
};