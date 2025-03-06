#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
    cin>>S;
    for (int i=0;i<S.size();i++)
    {
        if(S[i]==',')
        {
            S[i]=' ';
        }
       else if(S[i]>=97 && S[i]<=122)
        {
            S[i]=S[i]-32;
        }
        else if( S[i]>=65&& S[i]<=90)
        {
            S[i]=S[i]+32;
        }
        cout<<S[i];
    }
    return 0;
}
