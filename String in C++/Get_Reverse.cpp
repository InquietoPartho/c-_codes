#include<bits/stdc++.h>
using namespace std;

    class student
    {
        public:
            string name;
            int clss;
            char sec;
            int math_mark;
            int eng_mark;
    };

    int main()
    {
        int x;
        cin>>x;
        student a[x];

        for(int i=0;i<x;i++){
            cin>>a[i].name>>a[i].clss>>a[i].sec>>a[i].math_mark>>a[i].eng_mark;
            cin.ignore();
        }
        
        for(int i=x-1;i>=0;i--){
             cout<<a[i].name<<" "<<a[i].clss<<" "<<a[i].sec<<" "<<a[i].math_mark<<" "<<a[i].eng_mark<<endl;
        }
    
    return 0;
}