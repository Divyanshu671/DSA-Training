#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>& arr){
    int i,j,t;
    int n = arr.size();
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main(){
    vector<int> arr;
    int n,d;
    cout<<"Size:"<<endl;
    cin>>n;
    while(n--){
        cout<<"Element:";
        cin>>d;
        arr.push_back(d);
    }
    BubbleSort(arr);
    cout<<"Sorted Array:-"<<endl;
    for(auto x:arr)
        cout<<x<<" ";
}