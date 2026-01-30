#include <stdio.h>
void display(int arr[], int n)
{
    printf("Array elements -----> \n");
    for (int i =0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
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
int insert_pos(int arr[], int n, int x, int pos)
{
    if (pos<0 || pos >=n)
    {
        printf("Zyada hoshiyaar hai kya :D");
        return n;
    }
    for (int j=n-1; j>= pos; j--)
    {
        arr[j+1] = arr[j];
    }
    arr[pos]=x;
    return n+1;
}
int delete(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i==n)
    {
        printf("Zyada hoshiyari nahi !!!\n")
        return n;
    }
    for (int j=i; j<=n-2; j++)
    {
        arr[j] = arr[j+1];
    }
    return n-1;
}
int main()
{
    int arr[10] = {10, 20, 155, 40, 150, 160};
    int n=6;
    display(arr, n);
    int x=18;
    int ans = search (arr,n,x);
    if (ans==-1)
    {
        pritf("Better luck next time !!");
    }
    else
    {
        printf("%d is present at %d index\n",x,ans);
    }
    n=insert_pos(arr,n,100,4);
    display(arr,n);
    n=delete(arr,n,130);
    display(arr,n);
}
