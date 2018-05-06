//Hierarchial Inheritance
#include<iostream>
#include<cstring>
using namespace std;

class Student{
	protected:	
		string name;
		int reg_no;
	public:
		virtual void get_data()=0;
		virtual void print_data()=0;
};

class Art:public Student{
	protected:
		string block_name,music_code;
};

class Eng:public Student{
	protected:	
		string block_name,sport_code;
};

class Hindi:public Art{
	public:	
	void get_data(){
		cout<<"\nEnter Hindi student data:-"<<endl;
		cout<<"Enter Name:"<<endl;
		cin>>name;
		cout<<"Enter Reg no:"<<endl;
		cin>>reg_no;
		cout<<"Enter Building block:"<<endl;
		cin>>block_name;
		cout<<"Enter Music Code:"<<endl;
		cin>>music_code;
		}
    void  print_data (){
		cout<<"\nEnglish student data:-"<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Reg no:"<<reg_no<<endl;
		cout<<"Building block:"<<block_name<<endl;
		cout<<"Music code:"<<music_code<<endl;
		}
};
class Ece:public Eng{
	public:
	void get_data(){
		cout<<"\nEnter Ece student data:-"<<endl;
		cout<<"Enter Name:"<<endl;
		cin>>name;
		cout<<"Enter Reg no:"<<endl;
		cin>>reg_no;
		cout<<"Enter Building block:"<<endl;
		cin>>block_name;
		cout<<"Enter Sport Code:"<<endl;
		cin>>sport_code;
		}
    void  print_data (){
		cout<<"\nEce student data:-"<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Reg no:"<<reg_no<<endl;
		cout<<"Building block:"<<block_name<<endl;
		cout<<"Sport code:"<<sport_code<<endl;
		}
};
int main(){
	Ece E;
	Hindi H;          
	E.get_data();
	H.get_data();
	E.print_data();
	H.print_data();
	return 0;
}









