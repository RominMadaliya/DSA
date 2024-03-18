#include <iostream>

using namespace std;

int main()
{
    int a[20];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the array [" << i << "] Element :";
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        int check = 1;
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (a[i] == a[j])
            {
                check = 0;
                cout<<endl<<"The duplicate element is "<<a[i];
            }
        }
        if (check == 1)
        {
            cout <<endl<< "The unique element is " << a[i];
           
        }
    }
}