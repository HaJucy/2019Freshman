#include <stdio.h>
	float taxifee(int clock,int miles)
	{
    	float money;
    	if(miles<=3)
    	{
    	    money=14;
    	    printf("����Ϊ14\n");
    	}
    	else
    	{
        	if(clock>=23 || clock<5)
        	{
        	    money=13+1+2.3*(miles-3)*1.2;
        	    printf("ҹ�䳵��Ϊ��%f\n",money);
        	}
        	else
        	{
        	    money=13+1+2.3*(miles-3);
        	    printf("�ռ䳵��Ϊ��%f\n",money);
        	}
    	}
    	return money;    
	}

	int main()
	{
    	printf("����ܷ��ã�%.1f\n",taxifee(9,12)+taxifee(18,12));
    	return 0;
	}

