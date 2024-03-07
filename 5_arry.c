#include<stdio.h>

int main()
{
    int n,a=1;

    printf("Enter the value of n:");
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter the value of arr[%d]:", i);
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        arr2[i]=arr1[a];
        a++;
    }

    arr2[n-1]=arr1[0];
    

    for(int j=0;j<n;j++)
    {
        printf("\nThe value of arr[%d] is : %d",j,arr2[j]);
    }

}