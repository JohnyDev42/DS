#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector <int> a {1,2,3,4};
    cout<<a.at(0)<<a[1]<<a[2]<<a[3];
    a.pop_back();
    cout<<a.at(0)<<a[1]<<a[2]<<a[3]<<a.size();
    a.push_back(5);
    cout<<a.at(0)<<a[1]<<a[2]<<a[3]<<endl;
    vector <vector <int>> b {{1,2},{3,4}};
    cout<<b[0][0]<<" "<<b[0][1]<<endl;
    cout<<b[1][0]<<" "<<b[1][1];
}