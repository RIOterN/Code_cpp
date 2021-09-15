/*

*/
#include <iostream>
using namespace std;
int swap(int ts)
{
    int num=0;
    int vel[7];
    int did=1000000;
    for(int i=0;i<7;i++)
    {
        vel[i]=ts/did;
        ts=ts%did;
        did=did/10;
    }
    int *p=vel;
    int gate=0;
    did=1;
    while(p!=(vel+7))
    {
        if(*p!=0)
        {
            gate=1;
        }
        if(gate==1)
        {       
            num=num+*p*did;
            did=did*10;
        }

        p++;
    }
    return num;
}
int main(){
    int n=0,k=0,ts=0,max=0;
    cin>>n>>k;
    int times[k];
 //   int st[k];
    for(int i=0;i<k;i++)
    {
        ts=n*(i+1);
        cout<<ts<<" ";
        times[i]=swap(ts);

    }
    cout<<endl;
    for(int i=0;i<k;i++)
    {
        if(times[i]>max)
        {
            max=times[i];
        }
    }
    cout<<max<<endl;
    return 0;
}