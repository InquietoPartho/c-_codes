#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    float height;
    int age;

    Person(string nm,float h,int a)
    {
        name = nm;
        height = h;
        age = a;

    }

};
int main()
{
    string name1 = "Mukhtar Ali";
    Person* Mukhtar = new Person(name1,5.6,42);

    string name2 = "Hayder Ali";
    Person* Hayder = new Person(name2,6.00,45);

    

    
    return 0;
}