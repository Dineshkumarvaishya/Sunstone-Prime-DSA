#include<iostream>
using namespace std;
int main()
{
    int n,p=2,m;
    cin>>m;
    int r=1,F=0;
    n=(m+1)/2;
    for(int i=1;i<=n;i++)
    {
          F=F+i;
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
            cout<<F<<" ";
        for(int j=1;j<=(2*i)-3;j++)
        {
         cout<<"  ";
        }
         if(i!=1)
         cout<<F<<" ";

        cout<<endl;
    }




    for(int i=n;i>=1;i--)
    {
         F=F-r;
        for(int j=1;j<=n-i;j++)
        {
            
            cout<<"  ";
        }
            cout<<F<<" ";
        for(int j=1;j<=(2*i)-3;j++)
        {
         cout<<"  ";
        }
         if(i!=1)
         cout<<F<<" ";
        
        cout<<endl;
    }
    
}