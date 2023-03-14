#include<iostream>
using namespace std;

class Circle
{
public:
float PI;
float Rad;



Circle()
{
PI=3.14;
Rad=0.0;
}

Circle(float A,float B)
{
PI=A;
Rad=B;

}
void Display()
{
cout<<"Value of radius is :"<<Rad<<"\n";

}
virtual float Area()=0;
virtual float Circumfarance()=0;
};

class Marvellous:public Circle
{

public:
Marvellous():Circle()
{

}

Marvellous(float X,float Y):Circle(X,Y)
{

}


float Area()
{
float Ans=PI*Rad*Rad;
return Ans;

}

float Circumfarance()
{
float Ans=0.0;
Ans=2*PI*Rad;
return Ans;
}

};

int main()
{
Marvellous mobj1;
Marvellous mobj2(3.14,10.89);

float fret=0.0;

fret =mobj2.Area();
cout<<"Area is :"<<fret<<"\n";

fret=mobj2.Circumfarance();
cout<<"Circumfarance :"<<fret<<"\n";

return 0;
}