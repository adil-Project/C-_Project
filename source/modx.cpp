    // to define the function of |x|

	#include<iostream>
	#include<cmath>
	using namespace std;
	float temp(float x);
	int main()
	{
	 float w;
	  cout<<"enter the value of x"<<endl;
          cin>>w;
	  cout<<"value of function is"<<endl;
	  cout<<temp(w)<<endl;
	return 0;	
	}

	// defining function
	float temp(float x)
	{
	 float t;
	if(x<0)
	{
  	t=-x;
	}
	else if(x>0)
	 {
	t=x;
	}
	else 
	{
	t=0;
	}
	return t;
	} 
