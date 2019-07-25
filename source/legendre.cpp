// to check the orthogonality of legendre function
#include<iostream>
#include<cmath>

using namespace std;

float trap(int,int,int);
float legendre(float ,int);

int main()
{
 float d;
 int m,n,q;

 cout<<"enter the number of iteration \n "<<endl;
cin>>n;
cout<<"enter the value of m \n "<<endl;
 cin>>m;
 cout<<"enter the value of n \n "<<endl;
cin>>q;
 d=trap(n,m,q);
 cout<<d<<endl;
 return 0;
}

// legendre function
float legendre(float x,int n)
{
 float P[n],t;
 int i;

 P[0]=1;
 P[1]=x;

 for(i=1;i<n;i++)
  {
    P[i+1]=((2*i+1)*x*P[i]-i*P[i-1])/(i+1);
  }
 t=P[n];
 return t;
}
  
// trapezoidal rule for integration
float trap(int n,int p,int q)
{
 float a,b, h,x[n],u,v,s,t;
 int i;
 a=-1;
 b=1;

 h=(b-a)/n;
 u=0;
 v=0;

 for(i=1;i<n;i++)
  {
    x[i]=a+i*h;
    v=v+(legendre(x[i],p)*legendre(x[i],q));
  }
 t=h*v+u;
 return t;
}

