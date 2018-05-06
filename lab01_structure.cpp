#include<iostream>
#include<cstring>

using namespace std;

struct Student
{
    string name, stream, section;
    int roll, year;

    void show_details()
    {
        cout<<"\nDetails:::"<<endl
            <<"Name:\t"<<name<<endl
            <<"Stream:\t"<<stream<<endl
            <<"Sec:\t"<<section<<endl
            <<"Roll:\t"<<roll<<endl
            <<"Year:\t"<<year<<endl;
    }

    void get_details()
    {
    cout<<"\nEnter name:\t";
    cin>>name;
    cout<<"\nEnter stream:\t";
    cin>>stream;
    cout<<"\nEnter section:\t";
    cin>>section;
    cout<<"\nEnter Roll:\t";
    cin>>roll;
    cout<<"\nEnter Year:\t";
    cin>>year;
    cout<<endl;
    }

};

int main()
{
    Student s1;
    s1.get_details();
    s1.show_details();
}