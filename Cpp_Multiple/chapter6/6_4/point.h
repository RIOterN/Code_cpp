//point.h
#ifndef point_h
#define point_h

class point{
    public:
    point(float x=0,float y=0):x(x),y(y){}
    //~point();
    float getx() const {return x;}
    float gety() const {return y;}
   // friend float linefit();
    private:
    float x,y;  
};
#endif