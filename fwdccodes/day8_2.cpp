//Hybrid Inheritance
#include<iostream>
#include<cstring>
using namespace std;

class Student{
	protected:
		string name;
		int roll;
	public:
	virtual void show(){
		cout<<"Enter Name:"<<name<<endl;
		cout<<"Enter Roll:"<<roll<<endl;	
	}
	virtual void get(){
		cout<<"Name:"<<endl;
		cin>>name;
		cout<<"Roll"<<endl;
		cin>>roll;
	}
};

class Test:virtual public Student{
	protected:
		int marks1,marks2;
	public:
		void get(){
			cout<<"Enter marks 1st"<<endl;
			cin>>marks1;
			cout<<"Enter marks 2nd"<<endl;
			cin>>marks2;		
		}
		void show(){
			cout<<"Marks1:"<<marks1<<endl;
			cout<<"Marks2:"<<marks2<<endl;
		}
};

class Sport:virtual public Student{
	protected:		
		int marks;
	public:
		void get(){
			cout<<"Enter sport marks:"<<endl;		
			cin>>marks;		
		}
		void show(){
			cout<<"Sports Marks:"<<marks<<endl;		
		}
};

class Result:public Test,public Sport{
		protected:
			int result;
		public:
			void show(){
				Student::show();
				Test::show();
				Sport::show();
				cout<<"Total marks:"<<marks1+marks2+marks<<endl;						
			}
			void get(){
				Student::get();
				Test::get();
				Sport::get();
			}
};
int main(){
	Result R;
	R.get();
	R.show();
	return 0;
}

