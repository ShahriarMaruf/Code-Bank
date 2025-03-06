#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    string S;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        cin>>S;
    if(S.size()>10)
    {
        cout<<S[0]<<S.size()-2<<S[S.size()-1]<<endl;
    }
    else
    {
        cout<<S<<endl;
    }
    }
}
