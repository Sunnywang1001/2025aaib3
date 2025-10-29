// week08-1.cpp LeetCode 珼驹肈
// 3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N = 0; // 材1˙ノブ猭т妮秈羆计
        while (n) {
            n = n / 2; // 奔糷ブ
            N++;       // 1计(秈计)
        }
        cout << "瞷祇瞷 n 琌秈羆计㎡ " << N << " 计\n";
        int ans = 0; // 材2˙ノ癹伴猭舱场常琌1秈n计
        for (int i = 0; i < N; i++) {
            ans = ans * 2 + 1;
        }
        return ans;
    }
};

