#include<bits/stdc++.h>
using namespace std;

class Triangle {
  public:
    double base;
    double height;

    Triangle(double b, double h) {
       base = b;
       height = h;
    }
 
    double getArea() {
        return (base * height) / 2;
    }
};

 Triangle area(double b, double h)
{
    Triangle t(b, h);
    return t;
}
 
int main()
{
    Triangle t = area(2, 6);
    cout << t.getArea();
    return 0;
}