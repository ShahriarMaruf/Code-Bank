#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string S;
    cin>>S;
    int n=S.size(),f=0;
    char c='h';
    for(int i=0;i<n;i++)
    {
        if(S[i]==c)
        {
            f++;
            if(f==1)
            {
                c='e';
            }
            else if(f==2)
            {
                c='l';
            }
            else if(f==3)
            {
                c='l';
            }
            else if(f==4)
            {
                c='o';
            }
            else if(f==5)
            {
                break;
            }
        }
    }
    if(f==5)
        cout<<"YES";
    else
        cout<<"NO";

}
