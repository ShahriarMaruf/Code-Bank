#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int c=0;
    string S;
    cin>>S;
    sort(S.begin(),S.end());
    char x=S[0];
    for(int i=0;i<=S.size();i++)
    {
        if(x==S[i])
        {
            c++;
        }
        else
        {
            cout<<x<<" : "<<c<<endl;
            x=S[i];
            c=1;
        }
    }
    return 0;
}

