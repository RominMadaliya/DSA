#include <stdio.h>
int top = -1;
int arr[5];

void InsertEnd(int n)
{

    if (top > 5)
    {
        printf("The Array is full");
    }
    else
    {
        printf("\n");
        top++;
        arr[top] = n;

    }
}

void Display()
{
    
    if (top < 0)
    {
        printf("The Array is empty");
    }
    for (int i = 0; i <=top; i++)
    {
        printf("\nThe Array[%d] is : %d", i, arr[i]);
    }
    printf("\n");
}

void deleteEnd()
{
    printf("\n");
    if (top < 0)
    {
        printf("The Array is empty");
    }
    else
    {
        top--;
    }
}

int main()
{

    int num;
do{

    printf("\nPress 1 for Insert Element");
    printf("\nPress 2 for Delete Element");
    printf("\nPress 3 for Display");

    printf("\n\nEnter Your Choice :");
    scanf("%d",&num);

    printf("\n");

    if(num<0||num>3)
    {
        printf("Invalid Input!\n");
    }

    if(num==1)
    {
        int n;
        printf("Enter The number :");
        scanf("%d",&n);
        InsertEnd(n);
    }
    else if(num==2)
    {
        deleteEnd();
    }
    else if(num==3)
    {
        Display();
    }
}while(num>0||num<=3);


   
    return 0;
}