#include <iostream>
using namespace std;
#include <vector>
#include <string>

int M=0,N=0;

int jump(vector<int>& nums) {
    int end=0,step=0,len=nums.size();
    int remote=0;
    for(int i=0;i<len-1;i++)
    {
        remote=max(remote,i+nums[i]);
        if(end==i){
        step++;
        end=remote;   
        }        
    }
    return step;
}

int main()
{
    int number=0;
    int n;
    cin >> M ;
    if (cin.get()==',' ) 
    {
        cin>>N ;
    }
    n=M*N;
    vector<int>array(n,0);
    char c;
    int i=0;
    cin>>array[i++];
    while((c=getchar())!='\n')
    {
        cin>>array[i++];
    }
    number=jump(array);
    cout<<number<<endl;
    return 0;
}