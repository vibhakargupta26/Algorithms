#include<stdio.h>
void insertion_sort(int a[],int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void main()
{
    int a[10] = {5,4,3,2,1};
    insertion_sort(a,5);
    for(int i = 0;i<5;i++)
        printf("%d\n",a[i]);
}
