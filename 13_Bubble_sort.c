#include<stdio.h>
#include<stdlib.h>

void Accending_Sorting(int arr[],int n1)
{
    int temp=0;
    int l,r;

    for(int j=1;j<=n1;j++)
    {
        for(int k=0;k<n1-j;k++)
        {

        
        // l=arr[k];
        // r=arr[k+1];

        if(arr[k]>arr[k+1])
        {
            temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
        }
    }
    }
    printf("\n\n The sorted array is : \n ");
    for(int j=0;j<n1;j++)
    {
        printf("%d ",arr[j]);
    }

}

int main()
{
    int n1;
    printf("Enter the size of the array : ");
    scanf("%d",&n1);

    int arr[n1];
    arr[n1]=rand();

   
   
   
    printf("\n The Unsorted Array is :\n");
    for (int i=0;i<n1;i++)
    {
        printf("%d ",arr[i]);
    }

    Accending_Sorting(arr,n1);
    return 0;
}