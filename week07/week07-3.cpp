// week07-3.cpp LeetCode學習題 Simulation 第1題
// 682. Baseball Game 棒球積分
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: 要把成績, 數字們, 裝進a裡 面
        for (string op : operations) { // Part01: C++ 進階迴圈
            // cout << "現在看到的字串:" << op << "\n"; // Part02: 看它是怎樣, 等一下再操作
            // Part03: 一件件判斷要怎麼處理
            if (op == "C") { // Clear 消除最後一位
                a.pop_back(); // 消最後一個 // Part06: pop_back()
            }
            else if (op == "D") { // 兩倍分數, 再加到後面
                a.push_back(a.back() * 2); // Part06: back()
            }
            else if (op == "+") { // 加總前兩個, 再加到後面
                int temp = a.back(); // 先抓最後一個的值
                int temp2 = a[a.size() - 2]; // 再抓前面第二個的值
                a.push_back(temp + temp2); // 把兩個相加的結果, 再 push 到後面
            }
            else { // 其他字串, 變成分數後放進去
                a.push_back(stoi(op)); // Part04: push_back()
            }
        }

        int ans = 0;
        for (int now : a) { // Part05: C++ 進階迴圈, 要看裡面的值, 並且加總
            ans += now; // cout << now << " "; // Part02: 看它是怎樣, 等一下再操作 (有印的話)
        }

        return ans; // return 0; // 最後 return 等一下再拿答案
    }
};

