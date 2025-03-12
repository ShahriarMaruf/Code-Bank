#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    string S,T;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>S>>T;
    if(S.size()==T.size())
    {
        for(int i=0;i<S.size();i++)
        {
            cout<<S[i]<<T[i];
        }
        cout<<endl;
    }

    if(S.size()!=T.size())
    {
        if(S.size()<T.size())
        {
             for(int i=0;i<S.size();i++)
        {
            cout<<S[i]<<T[i];
        }
           for(int i=S.size();i<=T.size()-1;i++)
           {
               cout<<T[i];
           }
            cout<<endl;
        }

         else if(S.size()>T.size())
        {
             for(int i=0;i<T.size();i++)
        {
            cout<<S[i]<<T[i];
        }
           for(int i=T.size();i<=S.size()-1;i++)
           {
               cout<<S[i];
           }
           cout<<endl;

        }
    }
    }

    return 0;
}

