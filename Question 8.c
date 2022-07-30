/*Write a program to find the second smallest number in an array.Take array values
from the user.*/
#include<stdio.h>

int main()
{
    int a[10];
    second_small(a,6);
    return 0;
}
void second_small(int b[],int N)
{
    int i,j;
    printf("enter %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<N;i++)
    {
        for(j=0;j<N-i;j++)
        {
            if(b[j]>b[j+1])
            {
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("second smallest number in given array is %d",b[1]);
}

