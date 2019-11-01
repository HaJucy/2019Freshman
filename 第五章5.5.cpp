#include <stdio.h> 
 	int age(int n)
	{
    	int num;
    	if(n==1)
        	num=10;
    	else
       		num = age(n-1)+2;
    	return num;
 	}

	int main() 
	{
    	int AGE = age(5);
		printf("第5个人的年龄是%d岁", AGE); 
		return 0;
	}
