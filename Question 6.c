/*Write a program to sort elements of an array of size 10. Take array values from the
user.*/
#include<stdio.h>

int main()
{
    int a[10];
    sort(a,7);
    return 0;
}
void sort(int b[],int N)
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
    printf("sorted array is : ");
    for(i=0;i<N;i++)
    {
        printf("%d ",b[i]);
    }
}
