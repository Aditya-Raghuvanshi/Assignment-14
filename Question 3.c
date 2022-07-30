/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>

int main()
{
    int a[10];
    sum(a,6);
    return 0;
}
void sum(int b[],int N)
{
    int i,sumo=0,sume=0;

    printf("enter %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]%2==0)
           sume=sume+b[i];
        else
            sumo=sumo+b[i];
    }
    printf("sum of even numbers is %d\n",sume);
    printf("sum of odd numbers is %d",sumo);
}
