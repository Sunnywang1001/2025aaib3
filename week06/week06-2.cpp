//week06-2.cpp
//soit106_advance_008_c
#include <stdio.h>
int f(int a)
{
	if(a>0)
		return a;
	else
		return -a;
}



int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
