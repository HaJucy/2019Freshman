#include <stdio.h>
    int getIndex(int arr[5],int value)
    {
        int i;
        int index;
        for(i=0;i<5;i++)
        {
            if(arr[i] == value)
            {
                index = i;
                break;
            }
            index = -1;
        }
        return index;
    }

    int main()
    {
        int arr[5]={3,12,9,8,6};
        int value = 8;
        int index = getIndex(arr,value);
        if(index!=-1)
        {
            printf("%d�������д��ڣ��±�Ϊ��%d\n",value,index);             
        }
        else
        {
            printf("%d�������в����ڡ�\n",value);    
        }
        return 0;    
    }
