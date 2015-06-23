#include <iostream>
using namespace std;
int main()
{
int n,m,p,i,j,k,a[10][10],b[10][10],c[10][10] = {0};
cout<<"Dati numarul de linii n = ";cin>>n;
cout<<"Dati numarul de coloane m = ";cin>>m;
for(i=1;i<=n;i++)
for(j=1;j<=m;j++)
{
cout<<"a["<<i<<","<<j<<"]= ";
cin>>a[i][j];
}
cout<<"Elementele matricei A sunt: "<<endl;
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
cout<<"Dati numarul de linii m = ";cin>>m;
cout<<"Dati numarul de coloane p = ";cin>>p;
for(i=1;i<=m;i++)
for(j=1;j<=p;j++)
{
cout<<"b["<<i<<","<<j<<"]= ";
cin>>b[i][j];
}
cout<<"Elementele matricei B sunt: "<<endl;
for(i=1;i<=m;i++)
{
for(j=1;j<=p;j++)
cout<<b[i][j]<<" ";
cout<<endl;
}
for(i=1;i<=n;i++)
for(j=1;j<=p;j++)
for(k=1;k<=m;k++)
c[i][j]+=a[i][k]*b[k][j];
cout<<"Elementele matricei produs "<<endl;
for(i=1;i<=n;i++)
{
for(j=1;j<=p;j++)
cout<<c[i][j]<<" ";
cout<<endl;
}
}
