#include<stdio.h>
#include<stdlib.h>

void Selection_sort_accending(int arr[],int n1)
{
        int temp=0;

        for(int i=0;i<n1;i++)
        {
            for(int j=i+1;j<n1;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

}

void print_data(int arr[],int n1)
{
    printf("\n The sorted Array is :\n");
    for(int i=0;i<n1;i++)
    {
        printf("%d  ",arr[i]);
    }
}



int main()
{
    int n1;
    printf("Enter the size of array : ");
    scanf("%d",&n1);

    int arr[n1];
    arr[n1]=rand();

    for(int i=0;i<n1;i++)
    {
        arr[i]=(rand()%n1)+1;
    }
     printf("\n The Unsorted Array is :\n");
    for (int i=0;i<n1;i++)
    {
        printf("%d ",arr[i]);
    }

    Selection_sort_accending(arr,n1);
    print_data(arr,n1);
    return 0;
}