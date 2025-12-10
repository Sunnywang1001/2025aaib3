// week14-4.cpp 厩策璸礶 Linked List 材2肈
// LeetCode 445. Add Two Numbers II
class Solution {
public:
    // さぱ week14-2.cpp 碞琌碭︽
    ListNode* myReverse(ListNode* head) {
        if (head==nullptr || head->next==nullptr)return head;
        ListNode * ans = myReverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 =  myReverse(l1); //は筁ㄓ
        ListNode* list2 =  myReverse(l2); //は筁ㄓ

        return myReverse(myAddTwoNumbers(list1,list2));
    }
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2) {
    ListNode* ans = new ListNode(999);
    ListNode* ans2 = ans; // 腊Γр ans ЮぺΜ
    int carry = 0; // 秈
    while (list1 != nullptr || list2 != nullptr) {
        int now = carry;
        if (list1 != nullptr) {
            now += list1->val; //  list1 
            list1 = list1->next; // 传掸㏑
        }
        if (list2 != nullptr) {
            now += list2->val; //  list2 
            list2 = list2->next; // 传掸㏑
        }
        ans2->next = new ListNode( now%10 ); // 计场だ峨秈
        ans2 = ans2->next; // 传掸㏑
        carry = now / 10; // 秈场だ
    }
    if (carry>0) ans2->next = new ListNode(carry); // 程蔼秈

    return ans->next;
}


};

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
