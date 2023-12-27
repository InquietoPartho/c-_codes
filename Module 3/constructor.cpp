#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int cls;
        int roll;
        char section;

        Student(char n[],int c,int r,char s)
        {
            strcpy(name,n);
            cls = c;
            roll = r;
            section = s;

        }
};
int main()
{
    Student partho("Partho Roy",13,139,'A');
    Student pijush("Pijush Kanti",9,4,'B');
    
    cout<<pijush.name<<endl;
    cout<<pijush.cls<<endl;
    cout<<pijush.roll<<endl;
    cout<<pijush.section<<endl;
    return 0;
}