// to display the matrix
#include<iostream>
using namespace std;
int main()
{
int m,n,i,j;

cout<<"enter the number of rows u want"<<endl;
cin>>m;
cout<<"enter the number of coloumn u want"<<endl;
cin>>n;
int a[m][n];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}

}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<" "<<a[i][j];
}
cout<<" "<<endl;
}


return 0;
}

