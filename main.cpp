#include<iostream>

void sort(int* arry,int size)
{
	int tmp = 0;
	for(int i =0;i <size-1;i++)
	{
		for(int j =0;j<size-1;j++)
		{
			if(arry[i] > arry[j])
			{
			tmp = arry[j];
			arry[j] = arry[i];
			arry[i] = tmp;
			}
		}
	}
}
int main()
{
    int arry[] = {12,5,6,7,5,3,1};

    int size = sizeof(arry)/sizeof(arry[0]);
    sort(arry,size);
    return 0;
}
