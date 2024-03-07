#include<stdio.h>
int main()
{
    int a[50];
   
    int n;

    int d;

    printf("Enter the size of the array :");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter the arra[%d] Element :",i);
        scanf("%d",&a[i]);      
    }

    d=a[0];
    a[0]=a[n-1];
    a[n-1]=d;
    
    for(int i=0;i<n;i++)
    {
        printf("\nthe arra[%d] Element is : %d",i,a[i]);
        
    }
   return 0;
}