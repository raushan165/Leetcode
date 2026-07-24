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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> vec;
        for (ListNode* head : lists) {
            while (head) {
                vec.push_back(head->val);
                head = head->next;
            }
        }
        sort(vec.begin(), vec.end());
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        for (int x : vec) {
            tail->next = new ListNode(x);
            tail = tail->next;
        }
        return dummy->next;
    }
};