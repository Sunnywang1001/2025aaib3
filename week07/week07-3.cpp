// week07-3.cpp LeetCode�ǲ��D Simulation ��1�D
// 682. Baseball Game �βy�n��
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: �n�⦨�Z, �Ʀr��, �˶ia�� ��
        for (string op : operations) { // Part01: C++ �i���j��
            // cout << "�{�b�ݨ쪺�r��:" << op << "\n"; // Part02: �ݥ��O���, ���@�U�A�ާ@
            // Part03: �@���P�_�n���B�z
            if (op == "C") { // Clear �����̫�@��
                a.pop_back(); // ���̫�@�� // Part06: pop_back()
            }
            else if (op == "D") { // �⭿����, �A�[��᭱
                a.push_back(a.back() * 2); // Part06: back()
            }
            else if (op == "+") { // �[�`�e���, �A�[��᭱
                int temp = a.back(); // ����̫�@�Ӫ���
                int temp2 = a[a.size() - 2]; // �A��e���ĤG�Ӫ���
                a.push_back(temp + temp2); // ���Ӭۥ[�����G, �A push ��᭱
            }
            else { // ��L�r��, �ܦ����ƫ��i�h
                a.push_back(stoi(op)); // Part04: push_back()
            }
        }

        int ans = 0;
        for (int now : a) { // Part05: C++ �i���j��, �n�ݸ̭�����, �åB�[�`
            ans += now; // cout << now << " "; // Part02: �ݥ��O���, ���@�U�A�ާ@ (���L����)
        }

        return ans; // return 0; // �̫� return ���@�U�A������
    }
};

