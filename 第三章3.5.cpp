#include <stdio.h>
int main()
{
    int x=5;
    int y=5;
    int z=10;
    printf("x�Ƿ����y:%d\n",x>y);
    printf("y�Ƿ���ڵ���x:%d\n",y>=x);
    printf("y�Ƿ�С��z:%d\n",y<=x);
    printf("z�Ƿ�С�ڵ���x:%d\n",z<=x);
    printf("z�Ƿ����x+y:%d\n",z==x+y);
    return 0;
}
