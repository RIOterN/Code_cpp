#include <iostream>
using namespace std;

int main(){
    double m=0;
    double i , x=0,y=0;
    for( i=0;i<60000;i++)
    {
        x=rand()/double(RAND_MAX);
        y=rand()/double(RAND_MAX);
      //  cout<<x<<endl;
      //  cout<<y<<endl;
        if( (((x-0.5)*(x-0.5)+(y-0.5)*(y-0.5))<=0.25)&&(x*x+y*y>1) )
        {
            m++;
        }
    }
    cout<<(m/i)<<endl;
    return 0;
}