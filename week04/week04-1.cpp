/// week04-1.cpp
/// �Ʋ�C++ ���Y�ۦp���}�C vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; /// �W�g�йL�A����ۦp���}�C�A�S���u��l�ơv�A���j�p=0
    cout << "�S����l��a�����׬O" << a.size() << endl; /// �@�}�l a.size()=0
    a.push_back(99);
    cout << "�g�L push_back() �� a �������ܦ� " << a.size() << endl;

    vector<int> b(3); /// �u���Y�ۦp�v���}�C�A���׬O3�A�q�q���O0
    cout << "b�����׬O " << b.size() << endl; /// �@�}�l b.size()=3
    b.push_back(99); /// �̫᭱�A�[�@��99
    for(int i=0; i<b.size(); i++) cout << b[i] << " "; /// 0 0 0 99
    cout << endl;
    cout << "�g�L push_back(99) �� b�ܪ��F" << b.size() << endl;

    vector<int> c(3, 88); /// �u���Y�ۦp�v���}�C�A���׬O3�A�q�q���O88
    for(int i=0; i<c.size(); i++) cout << c[i] << " "; /// 88 88 88
    cout << "��l��(3, 88)�N�|�O3��88" << endl;
}
