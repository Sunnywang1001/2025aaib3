// week03-2a.cpp
// so it106_advance_007
#include <stdio.h>

int main()
{
    char a[5];               // �ŧi�@�Ӫ��׬� 5 ���r���}�C
    scanf("%s", a);          // ��J�r�� (�̦h 4 �Ӧr���A�̫�n�� '\0')
    int bad = 0;             // �P�_�O�_���O�j�� (palindrome)

    for(int i=0; i<4; i++)   // �ˬd�e��r���O�_�۵�
    {
        if(a[i] != a[4-1-i]) // ��� a[0] �M a[3], a[1] �M a[2]
            bad = 1;         // �p�G���۵��N�аO�� bad
    }

    if(bad==1) printf("NO\n");   // �p�G���O�j�� �� NO
    else printf("YES\n");        // �p�G�O�j�� �� YES
}
