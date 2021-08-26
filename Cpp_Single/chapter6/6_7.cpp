//使用3种方法输出数组1-10元素
#include <iostream>
using namespace std;

int main(){
    int array[10]={1,2 ,3,4,5,6,7,8,9,10};
    //1、使用数组下标输出；
    for(int i=0;i<10;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    //2、用数组名和指针运算
    for(int i=0 ;i<10;i++){
        cout<<*(array+i)<<" ";
    }
    cout<<endl;
    //3、使使用指针变量
    for(int *p=array;p<(array+10);p++){
        cout<<*p<<" ";
    }
    cout<<endl;
    return 0;
}