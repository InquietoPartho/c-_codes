#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);

    stringstream ss(a);
    string name;

    bool found = false;

    while(ss>>name){
        if(name=="Ratul"){
            found =true;
        }
    }
    if(found==true){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}