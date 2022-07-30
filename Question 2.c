/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>

int main()
{
    int a[10];
    avg(a,5);
    return 0;
}
void avg(int b[],int N)
{
    int i;
    float avg,sum=0;
    printf("enter %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
        sum=sum+b[i];
    }
    avg=sum/N;
    printf("average of given %d numbers is %f",N,avg);
}
