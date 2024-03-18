#include<iostream>
using namespace  std;

class batsman
{
    private:
    int bcode;
    char bname[20];
    int innings;
    int notout;
    int run;
    float avg;
      

    int calcavg(int in,int nt,int r)
    {

        int batavg= r/(in-nt);

        return batavg;
    }

    public:

    void read_data()
    {
        
        cout<<"Enter the batsman code : ";
        cin>>bcode;
        getchar();
        cout<<"Enter the batsman name : ";
        gets(bname);

        cout<<"How many innings played by batsman : ";
        cin>>innings;
    
        cout<<"How many inning batsman was notoout : ";
        cin>>notout;
    
        cout<<"How many runs make by batsman : ";
        cin>>run;
        avg=calcavg(innings,notout,run);

        
    }

    void display_data()
    {
       
        cout<<endl<<"The batsman code is : "<<bcode;
        cout<<endl<<"The batsman name is : "<<bname;
        cout<<endl<<"The total innings played by batsman is : "<<innings;
        cout<<endl<<"the player was notout in total innings  : "<<notout;
        cout<<endl<<"Total runs make by player in this tournamate is : "<<run;
        cout<<endl<<"The batsman avarage  is : "<<avg;



    }
};

int main()
{
    batsman details;
    details.read_data();
    details.display_data();

    return 0;

}

