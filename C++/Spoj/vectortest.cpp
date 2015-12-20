#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{   int data[5]={1,21,3,40,5};
    vector<int> x(data,data+5);
    cout<<x[1]<<endl;
    int v1=*max_element(x.begin(),x.end());
    cout<<v1<<endl;
    int v2=max_element(x.begin(),x.end())-x.begin();
    cout<<v2<<endl;
    return 0;
}