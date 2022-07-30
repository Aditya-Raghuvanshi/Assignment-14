/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>

int main()
{
    int a[10];
    greatest(a,6);
    return 0;
}
void greatest(int b[],int N)
{
    int i,max;

    printf("enter %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(i=0;i<N;i++)
    {
        if(max<b[i])
            max=b[i];
    }
    printf("greatest number is %d",max);
}
