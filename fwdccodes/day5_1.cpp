#include<iostream>
using namespace std;

class Complex{
	int real;
	int img;
	public:
		Complex(int a,int b):real(a),img(b){}
		Complex():real(0),img(0){}
		void display(){
			cout<<"Complex No. :"<<real<<"+i"<<img<<endl;	
		}
		Complex& operator+(Complex c2){
			Complex *temp = new Complex();
			temp->real=this->real+c2.real;
			temp->img=this->img+c2.img;
			return *temp;	
		}
		Complex& operator+(int r){
			Complex *temp = new Complex();
			temp->real=this->real+r;
			temp->img=this->img;
			return *temp;
		}
		friend Complex operator + (int r,Complex c1){
			Complex *temp= new Complex();
			temp->real=c1.real+r;
			temp->img=c1.img;
			return *temp;	
		}
};

int main(){
	int r,i,k;
	cout<<"Enter addition format:\n1.complex+complex\n2.complex+real\n3.real+complex"<<endl;
	cin>>k;
	if(k==1){
		Complex c1(1,2),c2(2,3),c3;
			c3=c1+c2;
			c3.display();
	}
	else if(k==2){
		Complex c1(1,5),c2;
		c2=c1+5;
		c2.display();
	}
	else if(k==3){
	Complex c1(5,1),c2;
		c2=5+c1;
		c2.display();
	}
	else
		cout<<"Wrong Choice:::"<<endl;
	return 0;
}
