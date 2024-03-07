#include<iostream>
using namespace std;

int main()
{
    int a=1,b=2,c=3,d;
    
    // d = --a && ++b || ++c;
    // cout<<" a: "<<a <<" b: "<<b <<" c: "<<c <<" d: "<<d <<endl;

    // d = a && ++b || ++c;
    // cout<<" a: "<<a <<" b: "<<b <<" c: "<<c <<" d: "<<d <<endl;
    
    // d = --a || b && ++c;
    // cout<<" a: "<<a <<" b: "<<b <<" c: "<<c <<" d: "<<d <<endl;

    d = ++a || ++b || ++c;
    cout<<" a: "<<a <<" b: "<<b <<" c: "<<c <<" d: "<<d <<endl;



}