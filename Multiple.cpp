#include<iostream>
using namespace std;

class Base1
{
public:
int A;

Base1()
{
cout<<"Base1 constructor\n";
}

~Base1()
{
cout<<"Base1 destructor\n";
}

void fun()
{
cout<<"inside fun\n";
}


};
class Base2
{
public:
int I;
int J;
int K;

Base2()
{
cout<<"Base2 constructor\n";
}

~Base2()
{
cout<<"Base2 destructo\nr";
}

void gun()
{
cout<<"inside gun\n";
}

};

class Derived:public Base2,Base1
{
public:
int X;
int Y;

Derived()
{
cout<<"Derived constructor\n";
}

~Derived()
{
cout<<"Derived destructor\n";
}

void sun()
{
cout<<"inside sun\n";
}

};


int main()
{

Derived dobj;


}