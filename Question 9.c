/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>

int main()
{
    int a[10],i;
    rev(a,6);
    return 0;
}
void rev(int b[],int N)
{
    int i,j,c[N];

    printf("enter %d numbers ",N);
    for(i=0,j=N-1;i<N,j>=0;i++,j--)
    {
        scanf("%d",&b[i]);
        c[j]=b[i];
    }
    printf("reversed array is : ");
    for(i=0;i<N;i++)
    {
        printf("%d ",c[i]);
    }
}
