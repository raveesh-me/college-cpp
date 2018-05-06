#include<iostream>
using namespace std;

class Object{
	int l,b,h;
	public:
		Object(int x):l(x),b(x),h(x){}
		Object(int x,int y,int z):l(x),b(y),h(z){}
		void volume();
};
void Object::volume(){
	cout<<"Volume:"<<l*b*h<<endl;
}
int main(){
	int l,b,h;
	cout<<"Enter Length,Breadth & Height"<<endl;
	cin>>l>>b>>h;
	if(l==b==h){
		cout<<"cube->"<<endl;
		Object cube(l);
		cube.volume();
	}
	else{
		cout<<"cuboid->"<<endl;
		Object cuboid(l,b,h);
		cuboid.volume();	
	}
	return 0;
}
