#include<iostream>
using namespace std;

class Number{
	int n;
	public:
		Number(int a):n(a){}
		long factorial(){
			int i;
			long r=1;
			if(n==1 || n == 0)			
				return 1;
			try{
				if(n>15)
					throw 1.0f;				
				else if(n<0)
					throw 1;
				else{
					for(i=1;i<=n;i++){
						r=r*i;				
					}
					return r;			
				}			
			}
			catch(float){
				cout<<"Overflow n>15"<<endl;
				return 0;
			}
			catch(int){
				cout<<"underflow n<0"<<endl;			
				return 0;			
			}
		}	
};

int main(){
	int i;
	long result;
	cout<<"Enter the number"<<endl;
	cin>>i;
	Number N(i);
	result=N.factorial();
	if(result==0)
		cout<<"Exception occured"<<endl;
	else
		cout<<"Result:"<<result<<endl;
	cout<<"Executed!"<<endl;
	return 0;
}
