///week02-2.cpp c++
///��c++�r�� �ϹL��
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout <<
    string a, ans; ///c++���r��
    cin >> a; ///�r�J�r��
    ///�˹L�Ӫ��j��r�ꪺ���׸�a.length().

    for(int i=a.length()-1; i>=0; i--){
        ans += a[i]; ///��r���˹L�ө�J����
    }

    cout << a << ans;
}
