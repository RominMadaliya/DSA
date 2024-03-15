#include<iostream>
using namespace std;

class base{

    int a;
    int b;

    public:
    int c,d;
    void get_data()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
        
        cout<<"Enter the value of b: ";
        cin>>b;

    }

    void print_data()
    {
        cout<<endl<<"The value of a: "<<a;
        cout <<endl<<"The value of b : "<<b;
       

    }

    void print_data1()
    {
        cout <<endl<<"The value of c : "<<c;
        cout <<endl<<"The value of d : "<<d;
    }
};
class base1 : public base
{

};

int main()
{
    base ob1;
    ob1.get_data();
    ob1.print_data();
    
    ob1.c=34;
    ob1.d=89;
    ob1.print_data1();


    base1 obj2;

    obj2.c=32;
    obj2.d=90;
    obj2.print_data1();
}