#include <stdio.h>
	int joneResult(int x, int y, int z)
	{
   		int sum = x+y+z;
   		return sum/3;
	}
 	void jackResult(int x, int y, int z)
	{
    	printf("���㲻����\n");
	}	
	
	int main()
		{
    		int a, b, c;
    		a = 10;
    		b = 20;
    		c = 30;
    		int jR = joneResult(a, b, c); 
    		printf("Jone�������ǣ�%d\n", jR);
    		printf("Jack�������ǣ�");
    		jackResult(a,b,c);
    		return 0;
		}
