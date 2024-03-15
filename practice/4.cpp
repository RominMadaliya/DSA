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
        int tot;
        cout<<"Enter the addimission number :";
        cin>>admno;
        getchar();
        cout<<"Enter The Student Name :";
        gets(sname);
        ctotal(sub);     
    }

    
    
};

int main()
{
    student details;

    details.take_data();
    
}