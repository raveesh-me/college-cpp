//Objects and abstraction
#include <iostream>
#include <cstring>

using namespace std;

class Student 
{
    public:
    string name, stream, section;
    int roll, year;

    Student():year(1){}
    Student(string nm, string st, string s, int r, int y):
        name(nm), 
        stream(st),
        section(s),
        roll(r),
        year(y){}

    void show_details()
    {
        cout<<"\nDetails:::"<<endl
            <<"Name:\t"<<name<<endl
            <<"Stream:\t"<<stream<<endl
            <<"Sec:\t"<<section<<endl
            <<"Roll:\t"<<roll<<endl
            <<"Year:\t"<<year<<endl;
    }

};

int main()
{
    string name, stream, section;
    int roll, year;
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
    
    Student s1(name, stream, section, roll, year);
    s1.show_details();

    return 0;
}