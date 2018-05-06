//Deep copy and Shallow copy
#include<iostream>
using namespace std;

class ABC{
	int r;
	int *pt;
	int *arr;
	public:
	ABC(int val){
		r=val;
		arr = new int[r];
		pt=&r;
	}
	ABC(ABC &k){
		r=k.r;
		pt=&r;
		arr = new int[r];
		for(int i=0;i<r;i++)
			arr[i]=k.arr[i];
	}
	void inz(){
		for(int i=0;i<r;i++){
		cout<<"enter value:";
			cin>>arr[i];
		}
	}
	void show(){
		cout<<"row address:"<<pt<<endl;
		cout<<"row value:"<<*pt<<endl;
		cout<<"row address again:"<<&r<<endl;
		for(int i=0;i<r;i++){
			cout<<"value:"<<arr[i]<<endl;
		}	
	}
	
	~ABC(){
		delete []arr;	
	}
};

int main(){
	ABC *x=new ABC(3);
	x->inz();
	x->show();
	ABC y=*x;
	y.show();
	delete x;
	y.show();
	return 0;
}
