/// week04-2.cpp
/// ��h�� vector<int> a ����l�� (�̭��n�񤰻��)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(3);      /// ��l�ƪ�����3�A�̭��q�q��0
    vector<int> b(3, 88);  /// ��l�ƪ�����3�A�̭��q�q��88

    int c[10] = {1, 2, 3, 9, 8, 7, 4, 5, 6, 0}; /// C�y�����T�w�j�p�B��l��

    vector<int> d(c, c+3); /// �q���}�l�������
    for(int i=0; i<d.size(); i++) cout << d[i] << " ";
    cout << "�o�O�� C�y�����}�C���U�A����C++��vector�������@���\n\n";

    vector<int> e(c, c+10); /// ��C�}�C�̪��ȡA��ۨ�vector�̡A�Φ�10�ӼƦr
    for(int i=0; i<e.size(); i++) cout << e[i] << " ";
    cout << "�o�O�� C�y�����}�C���U�A����C++�}�C����l�Ƥ@���\n\n";
}
