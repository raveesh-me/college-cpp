
//Templates
#include<iostream>
using namespace std;
template<class T>
class Number{
	private:
		T x,y;
	public:
		Number(T a,T b):x(a),y(b){}
		void swap(){
			T temp;
			temp=x;
			x=y;
			y=temp;	
		}
		void show(){
			cout<<"X:"<<x<<endl;
			cout<<"Y:"<<y<<endl;
		}
};
int main(){
	float i,j;
	cin>>i>>j;
	Number<double> N1(i,j);
	N1.show();
	N1.swap();
	N1.show();
	cout<<"size int"<<sizeof(int)<<endl;
	cout<<"size float"<<sizeof(float)<<endl;
	return 0;
}
