//function overloading
#include<iostream>
using namespace std;

class Object{
	int x,y,z;
	public:
		int cal_vol(int x){
			return x*x*x;		
		} 
		int cal_vol(int x,int y){
			return 3.14*x*x*y;		
		}
		int cal_vol(int x,int y,int z){
			return x*y*z;	
		}
		void disp_vol(int temp){
			cout<<"volume:"<<temp<<endl;
		}
};

int main()
{
	int i;
	double x,y,z,temp;
	cout<<"Enter the choice\n1.Cube\n2.Cuboid\n3.Cylinder"<<endl;
	cin>>i;
	if(i==1)
	{
		Object cube;
		cout<<"Enter side"<<endl;
		cin>>x;
		temp = cube.cal_vol(x);
		cube.disp_vol(temp);	
	}
	else if(i==2)
	{
		Object cuboid;
		cout<<"Enter length,breadth & heigth"<<endl;
		cin>>x>>y>>z;
		temp = cuboid.cal_vol(x,y,z);
		cuboid.disp_vol(temp);
	}
	else if(i==3)
	{
		Object cylinder;
		cout<<"Enter radius & heigth"<<endl;
		cin>>x>>y;
		temp = cylinder.cal_vol(x,y);
		cylinder.disp_vol(temp);
	}
	else
	{
		cout<<"Wrong choice"<<endl;
	}
	return 0;
}

