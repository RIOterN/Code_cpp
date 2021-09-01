/*
6-24用getline输入字符串
*/
#include <iostream>
using namespace std;
#include <string>

int main(){
    string city ,state;
    cout<<"please input city and state:"<<endl;
    getline(cin,city,',');//以逗号分隔
    getline(cin,state);
    cout<<"City: "<<city<<"  state: "<<state<<endl;
    int a,b;
    cout<<"please input a,b:"<<endl;
    cin>>a>>b;//以空格分隔
    cout<<"a= "<<a<<" b= "<<b<<endl;
    return 0;
}