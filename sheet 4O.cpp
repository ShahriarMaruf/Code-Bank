#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100010],temp;
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[j]<s[i])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
    }

}
