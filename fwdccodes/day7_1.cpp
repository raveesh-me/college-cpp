//Virtual function
#include<iostream>
#include<cstring>
using namespace std;

class Person{
	protected:	
		string name;
		int aadhar;
	public:
		Person(string s,int a):name(s),aadhar(a){}
		virtual void showDetails()=0;
};

class Employee:public Person{
	protected:
		int e_id;
		string dept;
	public:
		Employee(string n,int a,int e,string d):Person(n,a),e_id(e),dept(d){}
		void showDetails(){
			cout<<"Name:"<<name<<endl;
			cout<<"Aadhar:"<<aadhar<<endl;
			cout<<"Employee ID:"<<e_id<<endl;
			cout<<"Department:"<<dept<<endl;
		}
};

int main(){
	//Person P1("Prakash",1261);
	Employee E1("Shivam",1552011,202,"ECE");
	E1.showDetails();
	return 0;
}
