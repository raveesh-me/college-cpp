#include<iostream>
using namespace std;

class Car{
	int speed;
	public:
		Car():speed(0){}
		Car(Car& c){
		speed=c.speed;		
		}
		void carStart();
		void carSlow();
		void carFast();
		void carSpeed();
};

void Car::carStart(){
	speed=30;
}
void Car::carSlow(){
	if(speed>20)
		speed-=20;
	else
		speed=0;
}
void Car::carFast(){
	if(speed<=120)
		speed+=30;
	else
		speed=120;
}
void Car::carSpeed(){
	cout<<"Car speed: "<<speed<<endl;
}
int main(){
	Car C1;
	int i;
		do{
			cout<<"Enter your choice:\n1.car start\n2.car slow\n3.car fast\n4.car speed\n5.exit"<<endl;
			cin>>i;
			switch(i){
				case 1:C1.carStart();
						break;
				case 2:C1.carSlow();
						break;
				case 3:C1.carFast();
						break;
				case 4:C1.carSpeed();
						break;
				case 5: break;
				default:cout<<"wrong choice"<<endl;
						break;
			}
	
		}while(i!=5);
	Car C2(C1);
	C2.carSpeed();
	return 0;
}
