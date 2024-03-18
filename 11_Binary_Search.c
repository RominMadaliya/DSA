#include<stdio.h>

void binry_search(int a1)
{
    int a[10]={1,3,5,13,19,29,35,38,45,50};
    int mid;
    int count = 0;
    int temp=0;

    count=sizeof(a)/sizeof(int);
    printf("\nThe length of the array is : %d",count);

    int lower=0;
    int higher=count;

    mid=count/2;

   // printf("\n\n%d",a[mid]);

    while(lower<=higher)
   {
        if(a[mid]==a1)
        {
            printf("\nThe number is Availabel in this array,and Element position is %d",mid+1);
            temp++;
            break;
        }
        else if(a[mid]>a1)
        {
            higher=mid-1;

        }
        else if(a[mid]<a1)
        {
            lower=mid+1;
        }

        mid=(lower+higher)/2;
   }

   if(temp==0)
   {
    printf("\nThe number is not  Availabel in this array");
   }
}

int main()
{
    int n;
    printf("Enter the number You want to search in this array :");
    scanf("%d",&n);
    binry_search(n);
}