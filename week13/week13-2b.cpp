// week13-2b.cpp 學習計畫 Linked List 第1題
// 中國老師的程式 練習 new ListNode(999) 產生新的 node
// 練習用 ans->next 把 node 接起來
// LeetCode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999); // 不管三目，一律給 999
        ListNode* ans2 = new ListNode(888); // 不管三目，一律給 888
        ans->next = ans2; // 接起來
        return ans; // 看個程式，將可以把 node 999 的下一個, 接888
    }
};
