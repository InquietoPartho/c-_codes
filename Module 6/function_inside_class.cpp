#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nm,int aage,int m1,int m2){
        name = nm;
        age = aage;
        marks1 = m1;
        marks2 =m2;
    }

    int total_marks(){
        return (marks1+marks2);
    }
  
};
int main()
{
    Person partho("Pijush kanti Roy Partho",25,95,99);
    cout<<partho.name<<" "<<partho.age<<endl;
    cout<<"Total Marks is "<<" "<<partho.total_marks()<<endl;
    return 0;
}