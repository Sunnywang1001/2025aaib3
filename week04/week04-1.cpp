/// week04-1.cpp
/// 狡策C++ 罽皚 vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; /// 秅毙筁ぐ或皚⊿Τ﹍てウ=0
    cout << "⊿Τ﹍てa琌" << a.size() << endl; /// 秨﹍ a.size()=0
    a.push_back(99);
    cout << "竒筁 push_back()  a 跑Θ " << a.size() << endl;

    vector<int> b(3); /// 罽皚琌3硄硄常琌0
    cout << "b琌 " << b.size() << endl; /// 秨﹍ b.size()=3
    b.push_back(99); /// 程99
    for(int i=0; i<b.size(); i++) cout << b[i] << " "; /// 0 0 0 99
    cout << endl;
    cout << "竒筁 push_back(99)  b跑" << b.size() << endl;

    vector<int> c(3, 88); /// 罽皚琌3硄硄常琌88
    for(int i=0; i<c.size(); i++) cout << c[i] << " "; /// 88 88 88
    cout << "﹍て(3, 88)碞穦琌388" << endl;
}
