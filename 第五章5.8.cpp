#include <stdio.h>
	extern void printLine()     //这里定义的方法对吗？
	{	
		printf("**************\n");   
	}
	void say()
	{
    	printLine();
    	printf("I love imooc\n");
    	printf("good good study!\n");
    	printf("day day up!\n");
    	printLine();
	}

	int main()
	{
    	say();
    	return 0;
	}
