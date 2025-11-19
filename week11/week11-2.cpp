// week11-2.cpp 厩策癡絤 Math 材2肈
// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        //int total = 0; // ぃノ俱计, 埃猭挡狦计翴
        double total = 0; // 璶ノ疊翴计
        int M = salary[0], m = salary[0]; // ъ材1, ō程程
        for (int i=0; i<salary.size(); i++) {
            total += salary[i];
            if (salary[i] > M) M = salary[i]; // 传奔
            if (salary[i] < m) m = salary[i]; // 传奔
        }
        // 硂琌羆㎝, 奔程程キА
        return (total - M - m) / (salary.size()-2);
    }
};
