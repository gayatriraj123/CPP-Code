#include<iostream>
using namespace std;
class Demo 
{


public:
int i;
int j;
const int k;
const int l;

Demo():k(11),l(21)
{
i=51;
j=100;

}
Demo(int a,int b,int c,int d):k(c),l(d)
{
i=a;
j=b;
}
};



int main()
{
Demo obj1;
Demo obj2(10,20,30,40);

obj1.i++;
obj2.i++;

//obj1.k++;
//obj2.k++;
return 0;



}