//Constructor overloading 
#include<iostream>
using namespace std;

class Object
{
    float width, height, length;
    bool _iscube;

    public:
    Object(float i):
        width(i),
        height(i),
        length(i),
        _iscube(true){}

    Object(float i, float j, float k):
        width(i),
        height(j),
        length(k),
        _iscube(false){}

    void printVolume()
    {
        cout<<endl;
        if(_iscube)
        {
            cout<<"Volume of cube is: \t"<<width*height*length
                <<endl;
        }
        else
        {
            cout<<"Volume of cuboid is: \t"<<width*height*length
                <<endl;
        }
    }
};

int main()
{
    Object cube(10.0f), cuboid(10.0f, 20.0f, 30.0f);
    cube.printVolume();
    cuboid.printVolume();
    return 0;
}