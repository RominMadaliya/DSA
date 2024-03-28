#include <stdio.h>
typedef struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{

    struct node n1,n2,n3,n4,n5;

    printf("Enter Data for n1 :");
    scanf("%d",&n1.data);

    getchar();
    
    printf("Enter Character for n1 :");
    scanf("%c",&n1.ch);

    printf("Enter Data for n2 :");
    scanf("%d",&n2.data);

    getchar();

    printf("Enter Character for n2 :");
    scanf("%c",&n2.ch);

    printf("Enter Data for n3 :");
    scanf("%d",&n3.data);

    getchar();

    printf("Enter Character for n3 :");
    scanf("%c",&n3.ch);

    printf("Enter Data for n4 :");
    scanf("%d",&n4.data);

    getchar();

    printf("Enter Character for n4 :");
    scanf("%c",&n4.ch);
    
    printf("Enter Data for n1:");
    scanf("%d",&n5.data);
    getchar();
    printf("Enter Character for n5 :");
    scanf("%c",&n5.ch);

    n1.ptr=&n2;
    n2.ptr=&n3;
    n3.ptr=&n4;
    n4.ptr=&n5;
    n5.ptr=&n1;

    printf("\nN1 Data : %d, N1 Charcter : %c",n5.ptr->data,n5.ptr->ch);
    printf("\nN2 Data : %d, N2 Charcter : %c",n1.ptr->data,n1.ptr->ch);
    printf("\nN3 Data : %d, N3 Charcter : %c",n2.ptr->data,n2.ptr->ch);
    printf("\nN4 Data : %d, N4 Charcter : %c",n3.ptr->data,n3.ptr->ch);
    printf("\nN5 Data : %d, N5 Charcter : %c",n4.ptr->data,n4.ptr->ch);


    // for(int i=1;ptr!=NULL;i++)
    // {
    //     printf("\nN%d Data : N%d Character : %c",i,i);
    // }

}