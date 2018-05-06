#include<iostream>
#include<cstring>
using namespace std;

class Student{
	char name[10],sec[2],stream[3];
	int roll;
	public:
		Student(char n[],char s[],char c[],int r){
			strcpy(name,n);strcpy(stream,s);strcpy(sec,c);roll=r;	
		}
		Student(){roll=0;}
		Student(Student &S){
			strcpy(name,S.name);
			strcpy(stream,S.stream);
			strcpy(sec,S.sec);
			roll=S.roll;
		}
		void getDetails(){
			cout<<endl;
			cout<<"Enter Name:"<<endl;
			cin.getline(name,10);
			cout<<"Enter Stream:"<<endl;
			cin.getline(stream,3);
			cout<<"Enter Section:"<<endl;
			cin.getline(sec,2);
			cout<<"Enter Roll"<<endl;
			cin>>roll;
		}
		void showDetails(){
			cout<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Stream: "<<stream<<endl;
			cout<<"Section: "<<sec<<endl;
			cout<<"Roll:"<<roll<<endl;
		}
};
int main(){
	Student	S2,S4[2];
	S2.getDetails();
	S2.showDetails();
	Student S3(S2);
	S3.showDetails();
	for(int i=0;i<2;i++){
		S4[i].getDetails();
	}
	for(int i=0;i<2;i++){
		S4[i].showDetails();
	}
	return 0;
}
