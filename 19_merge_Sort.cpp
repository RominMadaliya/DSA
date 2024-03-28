#include <stdio.h>
#include <stdlib.h>

void merge(int *arr, int start, int mid, int end)
{

    int arr1_length = mid - start + 1;
    int arr2_length = end - mid;

    int *arr1 = new int[arr1_length];
    int *arr2 = new int[arr2_length];

    int i = start;
    int j = 0;

    while (j < arr1_length)
    {
        arr1[j++] = arr[i++];
    }

    i = mid + 1;
    int k = 0;
    while (k < arr2_length)
    {
        arr2[k++] = arr[i++];
    }

    j = 0;
    k = 0;
    i = start;

    while (j < arr1_length && k < arr2_length)
    {
        if (arr1[j] < arr2[k])
        {
            arr[i++] = arr1[j++];
        }
        else
        {
            arr[i++] = arr2[k++];
        }
    }

    while (j < arr1_length)
    {
        arr[i++] = arr1[j++];
    }
    while (k < arr2_length)
    {
        arr[i++] = arr2[k++];
    }

    delete [] arr2;
    delete [] arr1;
}

void Merge_sort(int *arr, int start, int end)
{

    // base condition
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    Merge_sort(arr, start, mid - 1);
    Merge_sort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

void print(int arr[], int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void random(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr[i] = rand()%100+1;
    }
}

int main()
{

    int arr[40];
    random(arr,40);
    print(arr,40);
    Merge_sort(arr,0,39);
    print(arr,40);



    return 0;
}
