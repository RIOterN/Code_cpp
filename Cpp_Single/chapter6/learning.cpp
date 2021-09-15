#include <iostream>
#include <vector>

int main(){
    const int upper=10;
    std::vector<int> testarray;
    testarray.push_back(5);
    testarray.push_back(6);
    for (auto it=testarray.begin();it !=testarray.end();++it)//1
    {
        if(*it<upper)
        {
            testarray.push_back(upper - *it);
        }

    }
    for(auto &test:testarray)//2
    {
        std::cout<<test<<std::endl;
    }
    return 0;
}