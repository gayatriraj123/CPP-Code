#include<iostream >
using namespace std;

class Demo
{
	public:
int i;
int j;
static int k;
static int m;

Demo()
{
i=0;
j=0;
cout<<"Value of i="<<i<<"\n";
cout<<"Value of j="<<j<<"\n";
}

Demo(int a,int b)
{

i=a;
j=b;

}

void fun()
{
cout<<"value of i ="<<this->i<<"\n";
cout<<"value of j ="<<this->j<<"\n";
dr5
}

static void gun()
{
cout<<"value of k ="<<k<<"\n";
cout<<"value of l="<<l<<"\n";
}

};

int Demo::k=0;
int Demo::m=0;
int main()
{
cout<<"Value of k="<<Demo::k<<"\n";
cout<<"Value of m="<<Demo::m<<"\n";
Demo::gun();

Demo o1(10,11);
Demo o2(20,21);	

Demo o3;

cout<<"Value of i in o1="<<o1.i<<"\n";
cout<<"Value of j in o1="<<o1.j<<"\n";

cout<<"Value of i in o2="<<o2.i<<"\n";
cout<<"Value of j in o2="<<o2.j<<"\n";

obj1.fun();
obj2.fun();
return 0;
}
