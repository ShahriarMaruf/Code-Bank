#include<iostream>
using namespace std;
int main ()
{
    string S,T;
    cin>>S>>T;
    int x=max(S.size(),T.size());
    for (int i=0;i<x;i++)
    {
        if(S[i]>T[i])
    {
        cout<<T;
        break;
    }
        else if(S[i]<T[i])
        {
            cout<<S;
            break;
        }
    }
    if(S==T)
    {
        cout<<S;
    }
    return 0;
}
