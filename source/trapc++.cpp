// definite integration of x.^3

#include<iostream>
#include<cmath>
using namespace std;
 float f(float);
float trap(float,float,int);
int main()
{
 float a,b,c;

int n;
cout<<"enter the value of a,b,n \n"<<endl;
cin>>a;
cin>>b;
cin>>n;
c=trap(a,b,n);
cout<<"the vaalue of rule is"<<endl;
cout<<c<<endl;
 return 0;
}
// function ofor integration
 float f(float x )
 {
   float t;
     t=pow(x,3);
    return t;
 }
// trapezoidal method
float trap(float a, float b,int n)
{
float h,x[n],u,v,s,t;
int i;
 h=(b-a)/n;
s=1;

u=(h/2)*(f(a)+f(b));
for(i=1;i<n;i++)
{
x[i]=a+i*h;
v=v+f(x[i]);
}
t=h*v+u;
return t;
}

