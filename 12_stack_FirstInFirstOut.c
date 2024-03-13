#include<stdio.h>

int top = -1;

void InsertStart(int arr[],int n1,int num)
{
    if (top >=n1-1 )
    {
        printf("The Array is full\n");
    }
    else
    {
        printf("\n");
        for(int i=top+1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=num;
        top++;

    }
    
}


void DeleteStart(int arr[])
{
    printf("\n");
    if (top < 0)
    {
        printf("The Array is empty\n");
    }
    else
    {
        for(int i=0;i<top;i++)
        {
            arr[i]=arr[i+1];
        }
        top--;
    }
}

void Display(int arr[],int a)
{

    if (top < 0)
    {
        printf("The Array is empty\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("\nThe Array[%d] is : %d", i, arr[i]);
        }
    }
    printf("\n");
}


int main()
{
    int n1;

    printf("Enter the Size of the Array: ");
    scanf("%d",&n1);

    int arr[n1];

    int num;

    do{

        printf("\nPress 1 for Insert Element");
        printf("\nPress 2 for Delete Element");
        printf("\nPress 3 for Display");

        printf("\n\nEnter Your Choice :");
        scanf("%d", &num);

        printf("\n");

         if (num < 0 || num > 3)
        {
            printf("Invalid Input!\n");
        }

        if (num == 1)
        {
            int n;
            printf("Enter The number :");
            scanf("%d", &n);
            InsertStart(arr,n1,n);
        }
        else if (num == 2)
        {
            DeleteStart(arr);
        }
        
        else if (num == 3)
        {
            Display(arr,n1);
        }

    }while (num > 0 || num <= 3);
    
    return 0;
}