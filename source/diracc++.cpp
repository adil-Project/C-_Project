// integration of dirac delta function

#include<iostream>
#include<cmath>
using namespace std;

 float f(float,float);
float trap(float,float,int,float);
int main()
{
 float q,a,b,c;

int n;
cout<<"enter the value of a,b,c\n"<<endl;
cin>>a;
cin>>b;
cin>>n;
cin>>q;
c=trap(a,b,n,q);
cout<<c<<endl;
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
float h,x[n],u,v,t;
int i;
 h=(b-a)/n;

u=(h/2)*(f(a,q)+f(b,q));
v=0;
for(i=1;i<n;i++)
{
x[i]=a+i*h;
v=v+f(x[i],q);
}
t=h*v+u;
return t;
}

