/*Encapsulation
carStart()
carSlow()
carFast()
printSpeed()

keep speed private
*/

#include <iostream>
using namespace std;

class Car
{
    int speed;
    void checkSpeed(){
        if(speed > 100){
            cout<<"Whoa! Slow down fella"<<endl;
        }
        if(speed <0){
            cout<<"Trying to go backwards are we?"<<endl;
        }
        
    }
    public:
    void carStart()
    {
        speed = 60;
    }

    void carSlow()
    {
        speed -= 20;
        checkSpeed();
    }

    void carFast()
    {
        speed += 30;
        checkSpeed();

    }

    void printSpeed()
    {
        cout<<"Currently Running at: "<<speed<<"KM/h"<<endl;
    }
};

int main()
{
    Car car;
    car.carStart();
    car.printSpeed();
    car.carSlow();
    car.printSpeed();    
    car.carSlow();
    car.printSpeed();
    car.carSlow();
    car.printSpeed();
    car.carSlow();
    car.printSpeed();
    car.carFast();
    car.printSpeed();
    car.carFast();
    car.printSpeed();
    car.carFast();
    car.printSpeed();
    car.carFast();
    car.printSpeed();
    car.carFast();
    car.printSpeed();
    car.carFast();
    car.printSpeed();
    car.carFast();
    car.printSpeed();
    return 0;
    

}