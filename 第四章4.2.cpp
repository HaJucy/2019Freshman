#include <stdio.h>
int main()
{ 
    int year = 2014;
    if(year%4==0)
    {
        printf("%s\n","是闰年");
    }
    else
    {
        printf("%s\n","是平年");
    }
    return 0;
}
