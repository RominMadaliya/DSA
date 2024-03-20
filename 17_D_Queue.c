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


void Insert_First(int arr[],int n,int num)
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
        
        for(int i=rear+1;i>=first;i--)
        {
            arr[i]=arr[i-1];
        }
        rear++;
        arr[first]=num;
        
        
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


void Delete_End(int arr[],int n)
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
        rear--;
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
        int n;

        printf("Enter the size of Array:");
        scanf("%d",&n);

        int arr[n];

        int choice;

        do{
            printf("\nPress 1. For Insert the End ELement");
            printf("\nPress 2. For Delete the First ELement");
            printf("\nPress 3. For Insert the First ELement");
            printf("\nPress 4. For Delete the Last ELement");
            printf("\nPress 5. For Display the ELement");

           printf("\n\nEnter Your Choice:");
           scanf("%d",&choice);

           printf("\n");

           if(choice==1)
           {
            int num;
            printf("Enter the Element :");
            scanf("%d",&num);
            Insert_End(arr,n,num);
           }

           else if(choice==2)
           {
            Delete_First(arr,n);
           }
           if(choice==3)
           {
            int num;
            printf("Enter the Element :");
            scanf("%d",&num);
            Insert_First(arr,n,num);
           }
           else if(choice==4)
           {
            Delete_End(arr,n);
           }
           else if (choice==5)
           {
             Display(arr,n);
           }
           
    
        }while(choice>0 || choice<=5);
    return 0;
}