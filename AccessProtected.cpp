#include<iostream>
using namespace std;

class Base
{


public:
int i;

private:
int j;

protected:
int k;

public:

Base()
{
i=10;
j=20;
k=30;
}


};

class Derived:public Base
{
public:

void fun()
{
cout<<"value of public i of base :"<<i<<"\n";
//cout<<"value of private j of base :"<<j<<"\n";
cout<<"value of protected k of base :"<<k<<"\n";
}


};

int main()
{

Derived Do;
Do.fun();


return 0;
}