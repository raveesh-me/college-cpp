//Matrix Multiplication using operator overloading
#include<iostream>
using namespace std;
class Mat{
	int r,c,**arr;
	public:
	Mat(int x,int y){
		r=x;
		c=y;
		arr = new int*[r];
		for(int i=0;i<r;i++)
			arr[i] = new int[c];
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				arr[i][j]=0;
	}
	void inz(){
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++){
		cout<<"Enter Values:"<<endl;
		cin>>arr[i][j];
		}	
	}
	void show(){
		for(int i=0;i<r;i++){
			cout<<endl;
			for(int j=0;j<c;j++)		
				cout<<arr[i][j]<<" ";		
		}
	}
	Mat& operator *(Mat& B){
	int i,j,k;
	Mat *m=new Mat(this->r,B.c);
	for(i=0;i<this->r;i++){
		for(j=0;j<B.c;j++){
			m->arr[i][j]=0;
			for(j=0;j<B.r;j++)
				m->arr[i][j]+=this->arr[i][k]+B.arr[k][j];			
		}
	}return *m;
}

};

int main(){
	Mat m1(2,3);
	m1.inz();
	m1.show();
	cout<<endl;
	Mat m2(3,2);
	m2.inz();
	m2.show();
	cout<<endl;
	Mat m3(2,2); 
	m3=m1*m2;
	m3.show();
	cout<<endl;
	return 0;
}

