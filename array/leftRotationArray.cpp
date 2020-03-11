#include<iostream>
#include<vector>

using namespace std;
int main(){
    int N, r;
    cin>>N>>r;
    vector <int>arr(N);
    vector <int>temp(N);
    for(int x=0;x<N;x++){
        cin>>arr[x];
    }
    for(int i=0;i<N;i++){
        temp[i]=arr[(i+r)%N];
    }
    for(int x :temp){
        cout<<x<<" ";
    }
}
