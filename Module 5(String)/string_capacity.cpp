#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    // cout<<s.size()<<endl;
    // cout<<s.max_size();
    // cout<<s.capacity();
    // s.clear();
    // if(s.empty()==true) cout<<"Empty";
    // else cout<<"Not Empty";
    s.resize(20,'X');
    cout<<s<<endl;
    return 0;
}