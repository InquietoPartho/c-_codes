#include<bits/stdc++.h>
#include<limits.h>

using namespace std;

class student
{
    public:
      string name;
      int cls;
      char s;
      int id;
      int math_marks;
      int eng_marks;
      
};

bool cmp(student a,student b)
{
    if((a.eng_marks+a.math_marks)>(b.eng_marks+b.math_marks)) return true;
    else if((a.eng_marks+a.math_marks)==(b.eng_marks+b.math_marks))
    {
        if(a.id<b.id)
        {
            return true;
        }
        else return false;
    }
    else return false;
}

int main()
{
    int n;
    cin>>n;
    student a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        cin.ignore();
    }

    sort(a,a+n,cmp);
    



    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }

    return 0;
}