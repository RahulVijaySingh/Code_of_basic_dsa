#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mx=-123212;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }



    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
}