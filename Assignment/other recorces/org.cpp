#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    vector<string>v1(5);
    vector<int>v2;
    vector<char>v3(5);
    vector<char>v4(4,'p');
    int i;
    for(i=0;i<4;i++)
    {
        string name;
        cin>>name;
        v1.push_back(name);
        
    }
    for(int j=1;j<=9;j++)
    {
        cout<<v1[j];
    }

    cout << sizeof(v1) << endl;   // fixed size (object size)
cout << v1.size() << endl;    // 0
cout << v1.capacity() << endl; // 0
}