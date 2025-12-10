// week14-2.cpp 學習計畫 Linked List 第2題
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==nullptr || head->next==nullptr) return head; // 終止條件

        ListNode* ans = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * };
 */
