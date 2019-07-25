// solve the differential quation by euler method

#include<iostream>
#include<cmath>
using namespace std;
float euler(float,float,float ,int); 
float f(float x,float y);
int main()
{
  float a,b,c,d,n;
  cout<<"enter the intial value of x"<<endl;
  cin>>a;
  cout<<"enter the intial value of y"<<endl;
  cin>>b;
  cout<<"enter the final value of x at which u have to find the   value"<<endl;
  cin>>c;
  cout<<"enter the number of iteration"<<endl;
  cin>>n;
  d=euler(a,b,c,n);
  cout<<"euler value is\n"<<d<<endl;
 }

// differential equation
float f(float x,float y)
{
  float t;
   t=exp(-x);
  return t;
}  
// euler formula 
float euler(float a,float b,float c,int
n)
{
 float o,h,x[n],y[n];
int i;
// step size
h=(c-a)/n;
a=x[0];
b=y[0];

 for(i=1;i<=n;i++)
 {
   x[i]=a+i*h;
  y[i]=y[i-1]+h*f(x[i-1],y[i-1]);
 }
  o=y[n];
return o;
}

