///week01-4a.cpp
#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int ans - 0;
    for(int i=a; i<=b; i++){
        if(i%3==0)ans += i ;
    }
    printf("%d", ans);
}
