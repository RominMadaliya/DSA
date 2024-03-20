// #include<stdio.h>
// int front=-1;
// int rear=-1;

// void Insert_front(int arr[],int n,int num)
// {
// if(front==-1 && rear==-1)
//     {
//         front++;
//         rear++;
//         arr[rear]=num;
//     }
//  else if(rear>=n-1)
//     {
//         printf("The Array is full!");
//     }
//     else 
//     {
//         rear++;
//         arr[rear]=num;
//     }
// }

// void Delete_First(int arr[],int n)
// {
//     printf("\n");
//     if (front < 0)
//     {
//         printf("The Array is empty\n");
//     }
//     else if(front==rear)
//     {
//         front=rear=-1;
//     }
//     else
//     {
//         front++;
//     }
// }


#include<stdio.h>

int first=-1;
int rear=-1;

void Insert_End(int arr[],int n,int num)
{
    
    if(first==-1 && rear==-1)
    {
        first++;
        rear++;
        arr[rear]=num;
    }
   else if(rear>=n-1)
    {
        printf("The Array is full!");
    }
    else 
    {
        rear++;
        arr[rear]=num;
    }

}


void Delete_First(int arr[],int n)
{
    printf("\n");
    if (first < 0)
    {
        printf("The Array is empty\n");
    }
    else if(first==rear)
    {
        first=rear=-1;
    }
    else
    {
        first++;
    }
}

void Display(int arr[],int a)
{
    if (first < 0)
    {
        printf("The Array is empty\n");
    }
    else
    {
        for (int i = first; i <= rear; i++)
        { 
            printf("%d  ", arr[i]);
        }
    }
    printf("\n");
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
            Insert_End(arr, n1, num);
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