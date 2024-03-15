#include<iostream>
using namespace std;

void swap(int n1,int n2)
{
    int temp=0;
    temp=n1;
    n1=n2;
    n2=temp;

     cout<<endl<<"After swap : n1="<<n1<<" n2="<<n2;

}

int main()
{
    int n1,n2;

    cout<<"Enter the value of n1:";
    cin>>n1;

    cout<<"Enter the value of n2:";
    cin>>n2;

    cout<<"Before swap : n1="<<n1<<" n2="<<n2;

    
    swap(n1,n2);


}