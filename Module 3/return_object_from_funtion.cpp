#include<bits/stdc++.h>
using namespace std;

    class Student
    {
        public:
            char name[100];
            int roll;
            int cls;
            char section;


            Student(int r,int c,int s, char* n){
                roll = r;
                cls = c;
                section = s;
                strcpy(name,n);
            }
    };

Student fun(){
    char name[100] = "Pijush Kanti Roy Partho";
    Student partho(10,9,'A',name);

    return partho;
}

int main()
{   
    Student partho=fun();

    cout<<partho.name<<endl;
    cout<<partho.cls<<endl;
    cout<<partho.roll<<endl;
    cout<<partho.section<<endl;
    return 0;
}