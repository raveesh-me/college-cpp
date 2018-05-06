#include<iostream>
#include<cstring>
using namespace std;

struct Student{
		char name[10],sec[2],stream[3];
		int roll;
	    void copyStudent(Student &S){
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
			cout<<"Roll: "<<roll<<endl;
		}
};
int main(){
	struct	Student	S1,S2[2],S3;
	S1.getDetails();
	S1.showDetails();
	S3.copyStudent(S1);
	S3.showDetails();
	for(int i=0;i<2;i++){
		S2[i].getDetails();
	}
	for(int i=0;i<2;i++){
		S2[i].showDetails();
	}
	return 0;
}
