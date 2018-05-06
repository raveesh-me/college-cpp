//object interaction using friend function
#include<iostream>
using namespace std;
class B;
class A{
	int x;
	public:
		void showB(B&);
};
class B{
	int y;
	public:
		B(int b):y(b){}
		friend void A :: showB(B&);
};

void A::showB(B& x){
			cout<<"value: "<<x.y<<endl;
}

int main(){
	A i;
	B j(6);
	i.showB(j);
	return 0;
}
