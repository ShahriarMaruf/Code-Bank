#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int sum=0;
    string S;
    cin>>S;
    int x=S.size();
    for(int i=0;i<x;i++)
    {
        sum+=S[i]-'0';
    }
    cout<<sum;
    return 0;
}
