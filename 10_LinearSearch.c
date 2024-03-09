#include <stdio.h>
#include<stdlib.h>

void get_data(int arr[],int n)
{
    int num,count=0;

    printf("\n\nEnter The Value If You Want To Search In This Array :");
    scanf("%d",&num);

    for(int i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            printf("\n\nThe Given Number is in This Array, And the Number is position %d",i);
            count=1;
        }
      
    }

    if(count==0)
    {
        printf("\nThe Given Number is Not  in This Array.");
    }


    
}



int main()
{

    int n;

    printf("\nEnter the size of array :");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        arr[i]=(rand()%n)+1;
    }

    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }

    
    get_data(arr,n);

    return 0;
}