#include<iostream>
using namespace std;

class Base
{
public:
int A;
int B;

Base()
{
cout<<"Inside base constructor\n";
}
~Base()
{
cout<<"Inside base destructor\n";
}

void Fun()
{
cout<<"Inside base fun\n";
}
};

class Derived:public Base
{
public:
int X;
int Y;

Derived()
{

cout<<"Inside Derived constructor\n";
}

~Derived()
{
cout<<"inside derived destructor\n";

}

void Gun()
{
cout<<"inside derived gun\n";
}

};

class DerivedX:public Derived
{
int i;
int y;
DerivedX()
{
cout<<"Inside DerivedX constructor\n";
}

~DerivedX()
{
cout<<"inside DerivedX destructor\n";
}

void Funn()
{
cout<<"inside DerivedX funn\n";
}

};
int main()
{
 Derived * ptr =NULL;

ptr= new Derived;

ptr->Fun();
ptr->Gun();

delete ptr;

return 0;
}