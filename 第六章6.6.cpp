#include <stdio.h>
    void say(char string[])
    {
       printf("%s\n",string);
    }   

    int main()
    {
        char string[] = "����Ľ������ѧϰC���ԣ�";
        say(string);
        return 0;
    }
