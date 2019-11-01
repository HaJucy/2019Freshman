#include <stdio.h>
    void say(char string[])
    {
       printf("%s\n",string);
    }   

    int main()
    {
        char string[] = "我在慕课网上学习C语言！";
        say(string);
        return 0;
    }
