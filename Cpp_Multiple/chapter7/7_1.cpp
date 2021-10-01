/*

*/
#include <iostream>
using namespace std;
#include "point.h"
#include "rectangle.h"
#include <cmath>
int main(){
    rectangle rect;
    rect.initrectangle(2,3,20,10);
    rect.rmove(3,2);
    //rect.showp();
    cout<<rect.getrx()<<endl;
    cout<<rect.getry()<<endl;
    cout<<rect.getw()<<endl;
    cout<<rect.geth()<<endl;
    return 0;
}