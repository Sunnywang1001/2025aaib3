// week12-2.cpp 學習重點 Math 第3週
// LeetCode 860. Lemonade Change 找零錢
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0; // 手上有多少錢
        for (int bill : bills) { // C++輪詢語法
            if (bill == 5) d5++; // 拿到5元，收好以備找零
            else if (bill == 10) { // 拿到10元，需找5元
                if (d5 >= 1) { // 若有5元可以找
                    d5--;
                    d10++;
                } else return false; // 沒辦法找錢，死定了
            }
            else if (bill == 20) { // 拿到20元，要找15元
                if (d10 >= 1 && d5 >= 1) { // 先找10元+5元
                    d10--;
                    d5--;
                } else if (d5 >= 3) { // 有3張5元可以找錢
                    d5 -= 3;
                } else return false; // 沒辦法找錢，死定了
            }
        }
        return true; // 成功找完零錢
    }
};
