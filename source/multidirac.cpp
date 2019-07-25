// // integration of dirac delta function

#include<iostream>
#include<cmath>
using namespace std;

 float f(float,float);
float trap(float,float,int,float);
int main()
{
 float  a,b,c,d,e;

int n;
cout<<"enter the value of a,b,c\n"<<endl;
cin>>a;
cin>>b;
cin>>n;

c=trap(a,b,n,1);
d=trap(a,b,n,0.1);
e=trap(a,b,n,0.01);
cout<<"value of integration at s=1\n"<<c<<endl;
cout<<"value of integration at s=0.1\n"<<d<<endl;
cout<<"value of integration at s=0.01\n"<<e<<endl;
 return 0;
}
// function ofor integration
 float f(float x,float s )
  {
   float t;
     t=(x+3)*(pow((2*3.14*s*s),(-0.5)))*(exp((-(x-2)*(x-2))/(2*s*s)));
return t;
}
// trapezoidal method
float trap(float a, float b,int n,float q)
{
float h,x[n],u,v=0,t=0;
int i;
 h=(b-a)/n;
u=0;

u=(h/2)*(f(a,q)+f(b,q));

for(i=1;i<n;i++)
{
x[i]=a+i*h;
v=v+f(x[i],q);
}
t=h*v+u;
return t;
}

