#include<stdio.h>
	int main()
	{
		int m,n;
		for(m=2;m<=50;m++)
		{
			for(n=2;n<m;n++)
			{
				if(m%n == 0)
				break;
			}
			if(m == n)
			{ 
				printf("%d\t",m);
		    }
		} 
		return 0;
	 } 
