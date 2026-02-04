#include<iostream>
using namespace std;
int main()
{
    int ans, var=0,n;
    cin>>n;
    while(n>0)
    {
        ans=n%10;
        var=(var*10)+ans;
        n=n/10;
        
    }
    cout<<var;
}