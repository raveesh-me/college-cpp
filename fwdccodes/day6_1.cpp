//operator overloading
#include<iostream>
using namespace std;

class Time{
	int hrs;
	int mins;
	public:
		Time(int h,int m):hrs(h),mins(m){}
		Time():hrs(0),mins(0){}
		Time operator ++(){
		++mins;
		if(mins==60){
			mins=0;
			++hrs;
			}return Time(hrs,mins);
		}//prefix
		Time operator ++(int){
			int h,m;
			h=hrs;
			m=mins;
			mins++;
			if(mins==60){
				mins=0;
				hrs++;			
			}return Time(h,m);
		}//postfix
		bool operator ==(Time T){
			if(this->hrs==T.hrs && this->mins==T.mins)
			return true;
			}
		bool operator >=(Time T){
			if(this->hrs == T.hrs && this->mins > T.mins)
				return true;
			else 
				return false; 
		}
	friend istream& operator >>(istream& input,Time& T){
		input>>T.hrs>>T.mins;
		return input;	
	}
	friend ostream& operator <<(ostream& output,Time& T){
		output<<"Hrs:"<<T.hrs<<" Mins:"<<T.mins<<endl;
		return output;
	}
};
int main(){
	Time T1,T2,T3;
	cout<<"Enter Time 1st:"<<endl;
	cin>>T1;
	cout<<"Enter Time 2nd:"<<endl;
	cin>>T2;
	if(T1==T2)
		cout<<"Times are Equal"<<endl;		
	else if(T1>=T2)
		cout<<"Time 1st is greater:"<<endl;
	else
		cout<<"Time 2nd is greater:"<<endl;

		cout<<"Pre Increment operation:"<<endl;
		++T1;
		cout<<T1;
		cout<<"Post Increment Operator"<<endl;
		T3=T2++;
		cout<<T3;
		return 0;
}
