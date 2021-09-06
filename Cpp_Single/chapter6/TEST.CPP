/*
Suppose we are building a simple vehicle motion simulator using the 
nonlinear vehicle kinematic model only.The model inputs at one timestamp
are [delta_f,a],front wheel angle and longitudinal acceleration,respectively.
The vehicle kinematic model is given by the differential equations below:
x_dot=v*cos(psi)
y_dot=v*sin(psi)
psi_dot=v/L*tan(delta_f)
v_dot=a
in which,x,y represents the x,y coordinates in the inertia frame,L is a positive
constant,v is the vehicle's longitudinal velocity,psi is the vehicle's heading 
angle with respect to the inertia fame.The simulator runs at 100HZ.At each cycle,
inject a set of control[delta_f,a]to the system.

Question 1:You need to generate the trajectory of all the states(totally 4 at one time step)
with given initial condition and a sequence of controls;

Question 2:Given a query time,return the vehicle state from the state trajectory above,
you need to consider about the corner cases(e.g.,the query time should be valid 
within the range,and etc,.).Tip:interpolation is needed

Please fill the contents in VehicleSimulator:

struct VehicleState{
    VehicleState(const double x,const double y,
const double psi,const double v):x(x),y(y),v(v){}
    double x=0.0;//global x coordinate
    double y=0.0;//global y coordinate
    double psi=0.0;//vehicle heding with respect to the global frame
    double v=0;//vehicle longitudinal velocity
};

struct Control{
    Control(const double delta_f,const double a):delta_f(delta_f),a(a){}
    double delta_f=0.0;//front wheel angle
    double a=0.0;//longitudinal acceleration
};

class VehicleSimulator{
    public:
    //class constructor,you are allowed to modify as needed
    VehicleSimulator(const double dt,const double l);

    //you are NOT allowed to modify the function signatures below
    void GenerateStateTrajectory(const std::vector<Control> &controls,
const VehicleState &initial_state);
    void QueryStateByTime(const double time,*VehicleState vehicle_state);

    private:
    std::vector<VehicleState> state_trajectory_;
    double ts;//simulator sampling time;
    double L;//vehicle wheel base length
};

*/
#include <iostream>
using namespace std;
#include <vector>
#include <cmath>
struct VehicleState{
    VehicleState(const double x,const double y,
const double psi,const double v):x(x),y(y),v(v){}
    double x=0.0;//global x coordinate
    double y=0.0;//global y coordinate
    double psi=0.0;//vehicle heding with respect to the global frame
    double v=0;//vehicle longitudinal velocity
};

struct Control{
    Control(const double delta_f,const double a):delta_f(delta_f),a(a){}
    double delta_f=0.0;//front wheel angle
    double a=0.0;//longitudinal acceleration
};

class VehicleSimulator{
    public:
    //class constructor,you are allowed to modify as needed
    VehicleSimulator(const double dt,const double l);

    //you are NOT allowed to modify the function signatures below
    void GenerateStateTrajectory(const std::vector<Control> &controls,
const VehicleState &initial_state);
    void QueryStateByTime(const double time,*VehicleState vehicle_state);

    private:
    std::vector<VehicleState> state_trajectory_;
    double ts;//simulator sampling time;
    double L;//vehicle wheel base length
};
int main(){
    psi=psi+(v/(L*tan(delta_f)))*0.01;
    v=v+a*0.01;
    x=x+v*cos(psi)*0.01;
    y=y+v*sin(psi)*0.01;
    return 0;
    
}