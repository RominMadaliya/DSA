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



// #include<stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the size of array :");
//     scanf("%d", &n);
//     int a[n];

//     for(int i=0; i<n; i++)
//     {
//         printf("Enter the value of array[%d]:", i);
//         scanf("%d", &a[i]);
//     }

//     for(int i=0; i<n-1; i++)
//     {
//         int temp=a[i];
//         a[i]=a[i+1];
//         a[i+1]=temp;
//     }

//     for(int i=0;i<n;i++)
//     {
//         printf("\nThe value of array[%d] is : %d",i,a[i]);
//     }
//     return 0;
// }