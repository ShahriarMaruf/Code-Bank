#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    vector<pair<int,int >>v;
    cin>>n;
    for (int i=2;i*i<=n;i++)
    {
        int count=0;
        while (n%i==0)
        {
            n=n/i;
            count++;
        }
         if (count > 0)
        v.push_back(make_pair(i,count));
    }

    if(n>1)
    {
        v.push_back(make_pair(n,1));
    }
     for (int i = 0; i < v.size(); i++) {
        cout <<"{"<< v[i].first <<"^"<< v[i].second<<"}";
         if (i != v.size() - 1)
            cout <<"*";


}
}
