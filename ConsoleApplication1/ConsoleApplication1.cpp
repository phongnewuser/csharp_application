#include<iostream>
#include<math.h>
#include<map>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    int max=0;
    int max1=0;
    for(auto i:m){
        if(i.second>max){
            max=i.second;
            max1=i.first;
        }
    }
    cout<<max1;
    return 0;

}