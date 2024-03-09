#include <stdio.h>
int main()
{
    char Details[100];

    FILE *ptr;
    ptr = fopen("text1.txt", "w");

    fprintf(ptr, "Hello My Dear Friends My name is romin madaliya and i am from Junagadh.");

    fclose(ptr);

    char arr[100];
    FILE *ptr1;
    ptr1 = fopen("text1.txt", "r");
    int i = 0;
    
   while(fgets(arr,100,ptr1)!=NULL)
   {
    printf("%s",arr);
   }

    fclose(ptr1);
}