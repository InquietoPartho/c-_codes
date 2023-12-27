#include<bits/stdc++.h>
using namespace std;

void print(stringstream &ss){
    string word;

    if(ss>>word){
        // cout<<word<<endl;(main)
        print(ss);
        cout<<word<<endl;//reverse_printing
    }
}
int main()
{
    string s;
    getline(cin,s);
    cin.ignore();

    stringstream ss(s);
    // string word;
    print(ss);
    // while(ss>>word){
    //     cout<<word<<endl;
    // }

    return 0;
}