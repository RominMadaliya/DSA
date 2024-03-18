#include <stdio.h>
int front = -1;
int rear = -1;

void Insert_Element(int arr[], int n1, int num)
{
    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        arr[rear] = num;
    }
    else if ((rear + 1) % n1 == front)
    {
        printf("\nThe Array is full!\n");
    }
    else
    {
        rear = (rear + 1) % n1;
        arr[rear] = num;
    }
}

void Delete_First(int arr[], int n)
{
    printf("\n");
    if (front < 0)
    {
        printf("\nThe Array is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front=(front+1)%n;
    }
}

void Display(int arr[], int a)
{
    int i;
    if (front < 0)
    {
        printf("\nThe Array is empty\n");
    }
    else
    {
         for ( i = front; i != rear; i=(i+1)%a)
         {
             printf("%d  ", arr[i]);
         }
         printf("%d  ",arr[i]);

    //  i=front;
    //  do{
    //      printf("\nThe Array[%d] is : %d", i, arr[i]);
    //      i=(i+1)%a;
    //  }while(i!=rear);
    //  printf("\nThe Array[%d] is : %d", i, arr[i]);

        printf("\n");
    }
}

int main()
{
    int n1;
    printf("Enter the Sizeof the array : ");
    scanf("%d", &n1);

    int arr[n1];

    int choice;

    do
    {
        printf("\nPress 1. For Insert the ELement");
        printf("\nPress 2. For Delete the ELement");
        printf("\nPress 3. For Display the ELement");

        printf("\n\nEnter Your Choice:");
        scanf("%d", &choice);

        printf("\n");

        if (choice<0 || choice>3)
        {
            printf("\n Invalid Input!!!\n");
        }
        if (choice == 1)
        {
            int num;
            printf("Enter the Element :");
            scanf("%d",&num);
            Insert_Element(arr, n1, num);
        }

        else if (choice == 2)
        {
            Delete_First(arr, n1);
        }
        else if (choice == 3)
        {
            Display(arr, n1);
        }

    } while (choice > 0 || choice <= 3);
    return 0;
}