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

void fun()
{
cout<<"value of public i :"<<i<<"\n";
cout<<"value of private j :"<<j<<"\n";
cout<<"value of protected k :"<<k<<"\n";

}

};

int main()
{

Base B;
cout<<"Value of public i :"<<B.i<<"\n";
// cout<<"Value of private j :"<<B.j<<"\n";
//cout<<"Value of protected k  :"<<B.k<<"\n";

B.fun();



return 0;
}