#include<iostream>
using namespace std;

class Mammals{
		protected: int x;
		Mammals(int a):x(a){}
};

class Birds{
		protected: int y;
		Birds(int b):y(b){}
};

class Bats:public Mammals,public Birds{
		int i,j;
		public:
			Bats(int a,int b,int c,int d):Mammals(a),Birds(b),i(c),j(d){}
			void attributes(){
				cout<<"X:"<<x<<endl;
				cout<<"Y:"<<y<<endl;
				cout<<"I:"<<i<<endl;
				cout<<"J:"<<j<<endl;	
			}
};

int main(){
	Bats B(1,2,3,4);
	B.attributes();
	return 0;
}
