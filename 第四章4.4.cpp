#include <stdio.h>
int main() 
{
    int sale=120;
    int year=1;
    if(sale > 100)
    {
        if(year >= 2)
        {
            printf("%s\n","恭喜小明获得优秀员工奖");  
        }
        printf("%s\n","很遗憾，期望你再接再厉");
    }
    else
    {
        printf("%s\n","很遗憾，期望你再接再厉");
    }
    return 0;
}
