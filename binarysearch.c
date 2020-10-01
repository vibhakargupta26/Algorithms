#include<stdio.h>

//function 1 : iterative binary search function 
int binary_search(int a[], int n, int ele)
{
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high)
    {
        mid = low + (high - low) / 2;
        if(a[mid] == ele)
        {
            return mid;
        }
        else if(a[mid]>ele)
        {
            high = mid - 1;
        }
        else if(a[mid]<ele)
        {
            low = mid + 1;
        }
        else
            return -1;
    }
}

//function 2 : recursive binary search function
int binarySearch(int a[], int l, int h, int x)
{
    if (h >= l) {
        int mid = l + (h - l) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            return binarySearch(a, l, mid - 1, x);

        return binarySearch(a, mid + 1, h, x);
    }

    return -1;
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Position of element: %d\n",binary_search(a,10,5));
    printf("Position of element: %d",binarySearch(a,0,10,5));
    return 0;
}
