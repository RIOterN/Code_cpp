/*
6-23string类的应用
*/
#include <iostream>
using namespace std;
#include <string>

inline void test(const char *title,bool value){
    cout<<title<<"return "<<(value?"true":"flase")<<endl;
}

int main(){
    string s1="DEF";
    cout<<"s1 is "<<s1<<endl;
    string s2;
    cout<<"please input s2:";
    cin>>s2;
    cout<<"length of s2: "<<(s2.length())<<endl;
    //比较运算符测试
    test("s1<=\"ABC\"",s1<="ABC");
    test("\"DEF\"=S1 ",s1=="DEF");
    //了解运算符测试
    s1+=s2;
    cout<<"s1+s2= "<<s1<<endl;
    cout<<"length of s1: "<<s1.length()<<endl;
    return 0;
}

