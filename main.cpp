#include <iostream>
#include "point.cpp"

using namespace std;

int main()
{
    Point p;
    p.setX(1.0); p.setY(2.0);
    cout<<"X: "<<p.getX()<<" "<<"Y: "<<p.getY()<<endl;
    return 0;

}