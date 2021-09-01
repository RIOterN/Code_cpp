/*
6-20使用vector创建数组对象，输入值并计算平均值
*/
#include <iostream>
using namespace std;
#include <vector>//包含vector

double avg(const vector<int>&arr){
    double sum=0;
    for(unsigned int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
    }
    return sum/arr.size();
}

int main(){
    unsigned int n;
    cout<<"n=";
    cin>>n;
    vector<int>array(n,0);
    for(unsigned int i=0;i<n;i++)
    {
        cout<<"input array["<<i<<"]=";
        cin>>array[i];
    }
    cout<<"average="<<avg(array)<<endl;
    return 0;
}