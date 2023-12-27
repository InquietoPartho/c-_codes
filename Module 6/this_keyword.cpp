#include<bits/stdc++.h>
using namespace std;
class Person
{

    public:
        string name;
        int age;

        Person(string name,int age){
            this->name = name;
            this->age = age;
        //This holo oi object er pointer
        }
};
int main()
{
    Person rakib("Rakib khan",25);

    cout<<rakib.name<<" "<<rakib.age<<endl;
    
    return 0;
}