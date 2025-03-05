#include<iostream>
#include<string>
using namespace std;
int main ()
{
    char temp;
    string S,T;
    cin>>S>>T;
    cout<<S.size()<<" "<<T.size()<<endl;
    cout<<S+T<<endl;
    temp=S[0];
    S[0]=T[0];
    T[0]=temp;
    cout<<S<<" "<<T;

    return 0;
}
