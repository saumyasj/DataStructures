#include<bits/stdc++.h>
using namespace std;
//Names of C++ classes should begin with a capital letter, and not contain any hyphens. Class names comprised of multiple words should have each word capitalized. Example:


class Box{
public:    //access attribute, can be private/protected too
    double length;
    double breadth;
    double height;
};

int main()
{
    Box box1;
    Box box2;
    double volume =0.0;
//direct member access operator (.)
    box1.height=5.0;
    box1.length=12.0;
    box1.breadth=7.0;

    volume = box1.height * box1.length * box1.breadth;
    cout<<"volume of first box is: "<< volume;

}
