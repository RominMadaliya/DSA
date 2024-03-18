#include<iostream>
using namespace std;

class student
{
    int admno;
    char sname[20];
    float sub[3];
    float total=0;

    float ctotal(float sub[])
    {
        for(int i=0;i<3;i++)
        {
            cout<<"Enter the marks of sub["<<i+1<<"] :";
            cin>>sub[i];
            total+=sub[i];
        }
        return total;
    }

    public:

    void take_data()
    {
        int tot;
        cout<<"Enter the addimission number :";
        cin>>admno;
        getchar();
        cout<<"Enter The Student Name :";
        gets(sname);
        ctotal(sub);     
    }

    void show_data()
    {

        int tot=total;
        cout<<endl<<"Your Addmision number is :"<<admno;
        cout<<endl<<"The Student Name is :"<<sname;
        for(int i=0;i<3;i++)
        {
            cout<<endl<<"Student Subject "<<i+1<<" marks is :"<<sub[i];
        }
        cout<<endl<<"Student Obtained marks in three subject are : "<<tot;
        
          
    }

    
    
};

int main()
{
    student details;

    details.take_data();

    details.show_data();
    
}