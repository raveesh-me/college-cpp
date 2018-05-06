#include<iostream>
using namespace std;
template<class T>
void swam_num(T& x,T& y){
	T temp;
	temp=x;
	x=y;
	y=temp;
}
int main(){
	int i,j;
	float m,n;
	cin>>i>>j;
	swam_num(i,j);
	cout<<i<<" "<<j<<endl;
	cin>>m>>n;
	swam_num(m,n);
	cout<<m<<" "<<n<<endl;
	return 0;
}
