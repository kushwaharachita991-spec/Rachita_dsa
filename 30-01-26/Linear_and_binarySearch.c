#include<stdio.h>
int search (int arr[], int n, int x)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int bsearch(int arr[], int n, int x)
{
    int low =0;
    int high = n-1;
    while (low<=high)
    {
        int mid = (low + high)/2;
        if (arr[mid] == x)
        {
            return mid;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
        }
        else if (x>arr[mid])
        {
            low = mid + 1;
        }
        else
        {
           high = mid -1;
        }
    }
    return -1;
}
int bsearch_f(int arr[], int n, int x)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if (x>arr[mid])
        {
            low = mid + 1;
        }
        else if(x<arr[mid])
        {
        high = mid -1;
        }
        else
        {
         if(arr[mid]!=arr[mid-1] || mid ==0)
         {
             return mid;
         }
         high=mid-1;
        }
    }
    return -1;
}
int bsearch_r(int arr[], int n, int x, int low, int high)
{
    if(low>high)
    {
        return -1;
    }
    int mid =(low + high)/2;
    if (arr[mid]==x)
    {
        return mid;
    }
    else if(x>arr[mid])
    {
        return bsearch_r(arr, n, x, mid+1, high);
    }
    else
    {
        return bsearch_r(arr,n,x,low, mid-1);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,4,6,12,33};
    int n= sizeof(arr) / sizeof(arr[0]);
    printf("%d ", search(arr, n, 33));
    printf("%d ", bsearch(arr, n, 6));
    printf("%d ", bsearch_f(arr,n,12));
    printf("%d ", bsearch_r(arr,n,6,0,n-1));
}