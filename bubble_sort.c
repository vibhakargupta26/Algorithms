#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int temp,i,j;
    for(i = 0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void main()
{
    int a[10] = {5,4,3,2,1};
    bubble_sort(a,5);
    for(int i = 0;i<5;i++)
        printf("%d\n",a[i]);
}
