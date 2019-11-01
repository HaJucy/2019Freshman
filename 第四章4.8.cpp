#include<stdio.h>
	int main()
	{
		int sum = 0;
		int i = 1;
		int flag = 1;
		for(i=1;i<=100;i++)
		{
			sum=sum+flag*i;
			flag=-flag;
			i++;
		}
		printf("sum=%d\n",sum);
		return 0;
	}
