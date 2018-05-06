//Object interaction

#include<iostream>
using namespace std;

class A;
class B;

class B
{
    int y;
    public:
    B(int b):y(b){}
    void show()
    {
        cout<<"Value: \t"<<y<<endl;
    }

    void printA (A &);
};

class A
{
    int x;
    public:
    A():x(0){}
    A(int i):x(i){}
    A(const A &obj):x(obj.x){}
    A(A *pt)
    {
        x = pt -> x;
    }

    void access(A &ob)
    {
        cout<< "Object accessed\t" << ob.x<<endl;

    }   

    void incr(A &ob)
    {
        ob.x++;
    } 

    void show()
    {
        cout<<"x: \t"<<x<<endl;
    }

};

void B::printA(A &obj)
{
    obj.show();
}

int main()
{
    A a, b(10), c(b);
    c.show();
    b.incr(c);
    c.show();

    A d(&b);
    d.show();

    B bob(30);
    bob.show();
    bob.printA(c);

    return 0;
}