// to find the multiplication of two matrices
// to find the trace of matrices 


#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	int a,b,m,n,i,j,k;
        
		
	// for input of matrices
	cout<<"enter the number of rows u want(m) in first matrix "<<endl;
	cin>>m;
	cout<<"enter the number of rows u want(n) in first matrix "<<endl;
	cin>>n;
	int d[m][n];
 	cout<<"enter the elements"<<endl;

	for(i=0;i<m;i++)
 	{
		for(j=0;j<n;j++)
  		{
    			cin>>d[i][j];
  		}
	}
 	cout<<"enter the number of rows u want(p) in second matrx"<<endl;
	cin>>a;
	cout<<"enter the number of rows u want(q) in second matrix "<<endl;
	cin>>b;
	int z[a][b];
	cout<<"enter the elements"<<endl;
 
	for(i=0;i<a;i++)
 	{
		for(j=0;j<b;j++)
  		{
    			cin>>z[i][j];
  		}
	}

	// for display of matrices
	cout<<"first matrix"<<endl;
	for(i=0;i<m;i++)
 	{
		for(j=0;j<n;j++)
  		{
    			cout<<d[i][j]<<" ";				
		}
		cout<<"\n";
	
	}
       cout<<"second matrix"<<endl;
	for(i=0;i<a;i++)
 	{
		for(j=0;j<b;j++)
  	{
    			cout<<" "<<z[i][j];				
		}
		cout<<"\n";
	
	}
       // multiplication of matrix
      int p[m][b];
    if(n==a)
 {
 cout<<"multiplication of matrix is"<<endl;
   for(i=0;i<m;i++)
    {
      for(j=0;j<b;j++)
       {
        p[i][j]=0;
         for(k=0;k<n;k++)
          {
           p[i][j]=p[i][j]+d[i][k]*z[k][j];
          }
         cout<<" "<<p[i][j];
        }
       cout<<" "<<endl;

 }
}
else 
{
cout<<"dimension are incompatible"<<endl;

}
return 0;
}


	
