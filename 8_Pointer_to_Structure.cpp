#include<iostream>

using namespace std;

class Details
{
    private:
    int Age;
    char name[20];
    float salary;

    public:

    void get_data()
    {
        cout <<endl << "Enter Your age :";
        cin>> Age;

        getchar();
        cout << endl << "Enter Your Name:";
        gets(name);

        cout<<endl<<"Enter Your Salary :";
        cin>>salary;

    }

    void print_data()
    {
        cout<<endl<<"Your age is "<<Age;
        cout<<endl<<"Your Name is "<<name;
        cout<<endl<<"Your salary is "<<salary;
    }
    
};

int main()
{
    Details ob1;
   // ob1.get_data();

    Details *ob2=&ob1;

     ob2->get_data();
    //  ob2->print_data();
    (*ob2).print_data();
    //this derefrence write in bracket because . operator presidence value high compare derefrence.
}