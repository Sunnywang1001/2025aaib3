// week04-5.cpp
// LeetCode 練習題第7題 66. Plus One
// 從右往左看，倒過來的迴圈
//
// 1, 9, 9
// 因為有進位，所以左邊+1
// 因為有進位，所以左邊還要+1
// 變到這裡，回來答案就對了
//
//  1, 2, 3
// 4沒有進位，直接答案就對了
//
// 9, 9, 9
// /10, 0, 0, 0

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); // 先知道陣列有幾個數字
        for(int i=N-1; i>=0; i--){ // 從最後一位開始
            if(digits[i] == 9) digits[i]=0 ; // 進位，不需要進一步處理
            else {
                digits[i]++; // 原本是9，變0，繼續往左進
                return digits;
            }
        }
        // 如果都跑完，代表原本是 9,9,9... 的情況
        // 需要在最前面插入一個1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
