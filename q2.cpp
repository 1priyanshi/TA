#include<iostream>
using namespace std;

bool istrue(int *a, int r, int n, int m){

    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]<=m && m%a[i]==0){
            c++;
        }
    }
    if(c==r){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int robot,a[10000],n,money;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>money;
    cin>>robot;
    

    if(istrue(a,robot,n, money)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}