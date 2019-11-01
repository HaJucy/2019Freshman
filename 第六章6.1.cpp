#include <stdio.h>
	int main()
	{
	    int arrFirst[5] = {1,2,3,4,5};
	    int arrSecond[] = {1,2,3,4,5};
	    int arrThird[5];
            arrThird[0]=1;
            arrThird[1]=2;
            arrThird[2]=3;
            arrThird[3]=4;
            arrThird[4]=5;
    	printf("%d\n",arrFirst[1]);
    	printf("%d\n",arrSecond[1]);
    	printf("%d\n",arrThird[1]);
    	return 0;
	}
