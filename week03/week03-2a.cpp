// week03-2a.cpp
// so it106_advance_007
#include <stdio.h>

int main()
{
    char a[5];               //  5 じ皚
    scanf("%s", a);          // 块﹃ (程 4 じ程璶Τ '\0')
    int bad = 0;             // 耞琌ぃ琌癹ゅ (palindrome)

    for(int i=0; i<4; i++)   // 浪琩玡じ琌单
    {
        if(a[i] != a[4-1-i]) // ゑ耕 a[0] ㎝ a[3], a[1] ㎝ a[2]
            bad = 1;         // 狦ぃ单碞夹癘 bad
    }

    if(bad==1) printf("NO\n");   // 狦ぃ琌癹ゅ △ NO
    else printf("YES\n");        // 狦琌癹ゅ △ YES
}
