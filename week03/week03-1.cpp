///week03-1.cpp
///C++�}�Cvector<int>
#include <iostream> /// cin cout �n�Ϊ�
#include <vector>   /// ���ϥΰ}�C vector
using namespace std; /// ���n�ѤF�i�ϥΩR�W�Ŷ� std�j
int main() {
    cout << "�п�J 4 �ӼƦr�G";
    vector<int> a; /// �u���Y�ۦp�v���}�C
    int now;
    for (int i=0; i<4; i++) {
        cin >> now; /// �{�b��J 1 �ӼƦr
        a.push_back(now); /// ����ua�v���̫᭱
    }

    for (int i=0; i<a.size(); i++) {
        cout << a[i] << ' '; /// �Ʀr�v�@�L�X
    }

    cout << "�{�b�{���X�̤S���J�F99 88 ��ӼƦr�A���G�O?\n";
    a.push_back(99); /// ����ua�v���̫᭱
    a.push_back(99); /// ����ua�v���̫᭱

    for (int i = 0; i < a.size(); i++) { ///�̷Ӱ}�C���j�p
        cout << a[i] << ' '; ///�Ʀr�᭱���Ů�
    }

}
