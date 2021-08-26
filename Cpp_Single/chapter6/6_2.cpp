#include <iostream>
using namespace std;

/*
初始化一个矩阵并将每个元素都输出.然后调用子函数，分别计 算每一行的元素之和，
将和直接存放在每行的第一个元素中，返回主函数之后输出各行元 素的和。
1 2 3 4
2 3 4 5
3 4 5 6
*/
fdfdsfdsfdfdfa
dfdffdfhdkfhkh
void fun(int tt[][4]){//传的是地址
    for(int i=0;i<3;i++){
        for(int j=1;j<4;j++) {tt[i][0]+=tt[i][j];}
    }
}
int main(){
    int table[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    fun(table);
    for(int i=0;i<3;i++) cout<<"table["<<i<<"][0]"<<"="<<table[i][0]<<endl;

}