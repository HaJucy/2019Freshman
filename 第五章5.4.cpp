#include <stdio.h>
	int getPeachNumber(int n)
	{
    	int num;
    	if(n==10)
    	{
       		return 1;
    	} 
    	else
    	{
       		num = (getPeachNumber(n+1)+1)*2;
        	printf("��%d����ʣ����%d��\n",n,num);
    	}
    	return num;
	}
	
	int main()
	{
    	int num = getPeachNumber(1);
    	printf("���ӵ�һ��ժ��:%d�����ӡ�\n",num);
    	return 0;
	}
