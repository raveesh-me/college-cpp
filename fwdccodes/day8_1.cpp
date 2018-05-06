//dynamic method dispatch
#include<iostream>
#include<cstring>
using namespace std;

class Person{
	protected:
		string name;
		int aadhar;
	public:
		Person(string n,int a):name(n),aadhar(a){}
		virtual void change(string s,int n){
			name=s;
			aadhar=n;
		}		
		virtual void show(){
			cout<<"Name:"<<name<<endl;
			cout<<"Aadhar:"<<aadhar<<endl;
			cout<<endl;
		}				
};

class Employee:public Person{
	protected:
		int reg_no;
		string dept;
	public:
		Employee(string n,int a,int r,string d):Person(n,a),reg_no(r),dept(d){}
		void show(){
			cout<<"Name :"<<name<<endl;
            cout<<"Aadhar no:"<<aadhar<<endl;         
            cout<<"Reg id :"<<reg_no<<endl;
            cout<<"Department :"<<dept<<endl;	
			cout<<endl;	
		}
		void change(string s,int a){
			name=s;
			aadhar=a;
		}
};
int main(){
	Person *pt;
	Person P("Shivam",7800);
	pt=&P;
	pt->show();
	pt->change("Prakash",1544);
	pt->show();
	Employee E("Kartik",3250,4569,"ME");
	pt=&E;
	pt->show();
	pt->change("Yash",1465);
	pt->show();
}
