/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
#include<stdio.h>

int main()
{
    int a[10],i;
    copye(a,6);
    return 0;
}
void copye(int b[],int N)
{
    int i,j,c[N];

    printf("enter %d numbers ",N);
    for(i=0,j=0;i<N,j<N;i++,j++)
    {
        scanf("%d",&b[i]);
        c[j]=b[i];
    }
    printf("copied array named as c is : ");
    for(i=0;i<N;i++)
    {
        printf("%d ",c[i]);
    }
}
