#include <stdio.h>
#include <stdlib.h>
#define N 10
	int cmp(const void *a,const void *b)
	{
   		return *(int*)b - *(int*)a;
	}

	int Sum(int score[])	
	{
    	int s = 0,i;
    	for(i = 0 ; i < N ; i++)
    	    s += score[i];
    	return s;
	}

	int Max(int score[])
	{
    	return score[0];
	}

	int Min(int score[])	
	{
    	return score[N-1];
	}

	double Avg(int s)	
	{
	    return (s + 0.0) / N;
	}

	int main()
	{
    	int score[N]={67,98,75,63,82,79,81,91,66,84};
    	int i,sum;
    	sum = Sum(score);
    	qsort(score,N,sizeof(int),cmp);
    	printf("�ܷ֣�%d\n",sum);
    	printf("��߷֣�%d\n",Max(score));
    	printf("��ͷ֣�%d\n",Min(score));
    	printf("ƽ���֣�%.2f\n",Avg(sum));
    	printf("\n�ɼ�����:\n");
    	for(i = 0 ; i < N ; i++)
    	{
    	    printf("��%d��: %d\n",i+1,score[i]);
    	}
    	return 0;
	}
