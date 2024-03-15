#include<stdio.h>

int first=-1;
int rear=-1;

void Insert_First(int arr[],int n,int num)
{
    
    if           
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
            printf("\nThe Array[%d] is : %d", i, arr[i]);
        }
    }
    printf("\n");
}




int main()
{
        int n;

        printf("Enter the size of Array:");
        scanf("%d",&n);

        int arr[n];

        int choice;

        do{
            printf("\nPress 1. For Insert the ELement");
            printf("\nPress 2. For Delete the ELement");
            printf("\nPress 3. For Display the ELement");

           printf("\n\nEnter Your Choice:");
           scanf("%d",&choice);

           printf("\n");

           if(choice==1)
           {
            int num;
            printf("Enter the Element :");
            scanf("%d",&num);
            Insert_First(arr,n,num);
           }

           else if(choice==2)
           {
            Delete_First(arr,n);
           }
           else if (choice==3)
           {
             Display(arr,n);
           }
           
    
        }while(choice>0 || choice<=3);
    return 0;
}