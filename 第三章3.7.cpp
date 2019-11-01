#include <stdio.h>
int main()
{
    double money = 12;
    double cost = 11.5;
    printf("小编能不能打车回家呢：");
    printf("%c\n",cost<=money ? 'y' : 'n');
    return 0;
}
