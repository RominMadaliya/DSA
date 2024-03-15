#include<iostream>
using namespace std;

float Square(float n)
{
    float square = (n*n);

    return square;
}

int main()
{
    float number;
    float square;

    cout<<"Enter the Number :";
    cin>>number;
    square = Square(number);

    cout<< "The number of square is :"<<square;
}