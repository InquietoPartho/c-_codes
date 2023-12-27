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
      
};



int main()
{
    int n;
    cin>>n;
    student a[n];
    student b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id;
        cin.ignore();
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].id<a[j].id)
            {
                swap(a[i].id,a[j].id);
            }
            else if(a[i].id>a[j].id)
            {
                swap(a[i].id,a[j].id);
            }
        }
    }

    
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }

    return 0;
}
    