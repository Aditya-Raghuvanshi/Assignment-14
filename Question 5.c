/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>

int main()
{
    int a[10];
    smallest(a,6);
    return 0;
}
void smallest(int b[],int N)
{
    int i,small;

    printf("enter %d numbers ",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    small=b[0];
    for(i=0;i<N;i++)
    {
        if(small>b[i])
            small=b[i];
    }
    printf("smalest number is %d",small);
}
