#include <iostream>  
#include <string>  
using namespace std;  
int number=0;
string getre(string str,int n)
{
    string strA;
    strA=str[0];
    string strB,strC;
    int i=1;
    while(str[0]==str[i])
    {
        strB=str[i+1];
        strA.append(strB);
        i++;
    }
    while(str[0]<=str[n])
    {
        n--;
    }
    strB=str.substr(i,n-j);
    str.reserve
    return strB;
}


int main()
{
    int N=0,Q=0;
    string str;
    cout<<"请输入字符串长度和字符串个数"<<endl;
    cin>>N>>Q;
    for(int i=0;i<Q;i++)
    {
        cout<<"请输入第"<<Q<<"行字符串"<<endl;
        cin>>str;
        str=getre(str,N-1);
        cout<<str<<"  "<<number<<endl;
    }
    return 0;
}