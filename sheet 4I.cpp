#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
    int i,n,f;
    cin>>S;
    n=S.size();
    for (i=n;i>=0;i--)
    {
        if(S[i]==S[n-i-1])
        {
            f=1;
        }
        else
        {
            f=0;
        }
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
