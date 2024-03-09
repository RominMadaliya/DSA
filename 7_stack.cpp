#include<iostream>
using namespace std;

int top=-1;

class Array{

    public:
    
        int *arr;
        int size;

        Array(int n)
        {
            size=n;
            arr= new int[size];
        }
    

};

int main()
{
    int num;
    cout << endl << "Enter the size of the array :";
    cin>>num;

    Array obj(num);
}
// My Code Is Incomplete ........