#include<iostream>
using namespace std;

class Demo
{
public:
int A,B;
Demo(int i=0,int j=0)
{
A=i;
B=j;

}
void Display()
{
cout<<A<<"\n";
cout<<B<<"\n";

}
friend Demo operator +(Demo ,Demo)
friend Demo operator -(Demo ,Demo)
friend Demo operator *(Demo ,Demo)

};
Demo operator +(Demo obj1,Demo obj2)
{
cout<<"inside + operator function \n";
return Demo(obj.A+obj.B, obj1.B+obj2.B)
}

Demo operator +(Demo obj1,Demo obj2)
{
cout<<"inside + operator function \n";
return Demo(obj.A+obj.B, obj1.B+obj2.B)
}

Demo operator -(Demo obj1,Demo obj2)
{
cout<<"inside - operator function \n";
return Demo(obj.A-obj.B, obj1.B-obj2.B)
}

Demo operator *(Demo obj1,Demo obj2)
{
cout<<"inside * operator function \n";
return Demo(obj.A*obj.B, obj1.B*obj2.B)
}

int main()
{
Demo X(10,20);
Demo Y (30,40);
Demo Ans;

Ans=X+Y;
Ans.Display();

Ans=X-Y;
Ans.Display();

Ans=X*Y;
Ans.Display();

return 0;
}