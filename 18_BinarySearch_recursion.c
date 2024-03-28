#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int arr[], int size)
{
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n\nsorted array is \n\n ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int BinarySearch_Recursion(int arr[], int size, int start, int end, int num)
{
    int mid = (start + end) / 2;

    if (start > end)
    {
        return 0;
    }
    else
    {

        if (start <= end)
        {
            if (arr[mid] == num)
            {
                return mid;
            }
             else if(arr[mid]>num)
            {                                                                                  
            end=mid-1;
            mid=(start+end)/2;
            }
            else if(arr[mid]<num)
            {
            start=mid+1;
            mid=(start+end)/2;
            }

            
        }
    }
            BinarySearch_Recursion(arr,size,start,end,num);
}

int main()
{
    int size;
    printf("\nEnter the size of the array : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % size) + 1;
    }

    printf("\n\nUnsorted array is \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    SelectionSort(arr, size);

    int start = 0;
    int end = size - 1;
    
    int num;
    printf("\n\nEnter the number you want to search in this array : ");
    scanf("%d", &num);
    
    int ans = BinarySearch_Recursion(arr, size, start, end, num);

    if(ans>0)
    {
        printf("The number is available in this array,and its position is : %d ",ans+1);
    }
    else
    {
         printf("The number is unavailable in this array");
    }

    return 0;
}    