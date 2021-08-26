#include <iostream>
using namespace std;

int main(){
    int mx[2][2][2]={1,2,3,4,5,6,7,8};
    for(int i=0;i<2;i++)
    {
        cout<<"i="<<i<<" ";
        for(int j=0;j<2;j++)
        {
           // cout<<"j="<<j<<" ";
            for(int n=0;n<2;n++)
            {
               // cout<<"n="<<n<<" ";
                cout<<*(*(*(mx+i)+j)+n)<<" ";
            }
        }
        cout<<endl;

    }
    cout<<*(*(*(mx+0)+1)+1)<<endl;

    return 0;
}