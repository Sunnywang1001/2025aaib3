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
// week13-3.cpp 學習計畫 Linked List 第3題
// LeetCode 2. Add Two Numbers 連結串列列出Linked List 相加的時候，會超過10，要進位，也就是小數個位carry
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { // 似乎l1,l2寫反了?? 實際拿來用已不是課堂的那兩個
        ListNode* ans = new ListNode(999); // 功能性用的 指標用
        ListNode* ans2 = ans; // 功能性的指標，用來做事, 例如 ans 會固定 Linked List 位置
        int carry = 0; // 第一筆，如果都不是空 pointer 帶進來做(下兩筆會重複)
        while (l1 != nullptr || l2 != nullptr) { // 要累加到不要走基礎!!
            int now = carry;
            if (l1 != nullptr) { // 還是要處理 list1
                now += l1->val; // 還是要加
                l1 = l1->next; // 用完了，換下一筆
            }
            if (l2 != nullptr) { // 還是要處理 list2
                now += l2->val;
                l2 = l2->next; // 用完了，換下一筆
            }

            ans2->next = new ListNode(now % 10); // 慢慢累計，下個節點的答案
            ans2 = ans2->next; // 指向後一個(答案跑下去)

            carry = now / 10; // 更新進位
        }

        if (carry>0) { // 要處理最後進位, 或最後遺值進位
            ans2->next = new ListNode(carry);
        }

        return ans->next;
    }
};
