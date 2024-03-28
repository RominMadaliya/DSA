#include<stdio.h>
#include<stdlib.h>


int print(int arr[],int n)
{
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}


int Quick_sort(int arr[],int first,int last,int n)
{
    int pivot,i,j;

    if(first<last)
    {
        print(arr,n);

        pivot=first;
        i=first;
        j=last;

    while(i<j)
    {
        while(arr[i]<=arr[pivot] && i<last)
        {
            i++;
        }
        while(arr[pivot]<arr[j])
        {
            j--;
        }

        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;   
        }
    }
    int temp=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=temp;

    Quick_sort(arr,first,j-1,n);
    Quick_sort(arr,j+1,last,n);
    }
}



int main()
{
    int n;
    printf("Enter the size of the arry :  ");
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 99 + 1;
    }

    
    printf("The Unsorted array is\n");

     for (int i = 0; i < n; i++)
    {
      printf("%d ",arr[i]);
    }
    
    Quick_sort(arr,0,n-1,n);

    printf("\n\n\nThe sorted array is\n");
    print(arr,n);
}