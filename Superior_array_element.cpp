#include<bits/stdc++.h>
using namespace std;

int superior(int n ,int arr[]){
    stack<int> s;
    for(int i=n-1;i>-1;i--){
        if(!s.size() || s.top()<arr[i]){
            s.push(arr[i]);
        }
    }
    return s.size();
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"No. of Superior elements-\n";
    cout<<superior(n, arr);
}