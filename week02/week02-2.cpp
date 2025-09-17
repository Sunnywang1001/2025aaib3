///week02-2.cpp c++
///用c++字串 反過來
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout <<
    string a, ans; ///c++的字串
    cin >> a; ///毒入字串
    ///倒過來的迴圈字串的長度較a.length().

    for(int i=a.length()-1; i>=0; i--){
        ans += a[i]; ///把字母倒過來放入答案
    }

    cout << a << ans;
}
