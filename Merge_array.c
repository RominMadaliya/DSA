#include<stdio.h>

int main()
{
    int n1,n2,n3;
    printf("Enter the size of Array one :");
    scanf("%d",&n1);

    int a1[n1];

     for(int k=0; k<n1; k++) {
        printf("Enter the arra[%d] Element :",k);
        scanf("%d",&a1[k]); 
    }

   
    printf("Enter the size of Array Two :");
    scanf("%d",&n2);
     int a2[n2];

    for(int l=0; l<n2; l++) {
        printf("Enter the arra[%d] Element :",l);
        scanf("%d",&a2[l]); 
    }

    n3=n1+n2;
    int a3[n3];
    int i=0;
    for(; i<n1; i++) {
        a3[i]=a1[i];
    }
    for(int j=0;j<n2;j++)
    {
        a3[i]=a2[j];
    }

    for(int v=0;v<n3;v++)
    {
        printf("%d\n",a3[v]);
    }

    return 0;
}

   

    
    