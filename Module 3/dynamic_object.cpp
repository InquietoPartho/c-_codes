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
   Student* partho = new Student("Partho Roy",13,139,'A');

   cout<<partho->cls<<endl;
    return 0;
}