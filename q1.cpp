#include<iostream>
using namespace std;

int * arr(int n, int *a){
    if(n%2==0){
        for(int i=0;i<n/2;i++){
        a[i]=i+1;
      }
      int k=0;
      for(int i=n/2;i<=n;i++){
          a[i]=-a[k++];
      }
    }
    else{
        a[n/2]=0;
           for(int i=0;i<n/2;i++){
            a[i]=i+1;
        }
        int k=0;
        for(int i=n/2+1;i<=n;i++){
            a[i]=-a[k++];
        }
    }
    return a;
}

int main(){
    int a[100];
    int n;
    cin>>n;
    int *aa= arr(n,a);
    for(int i=0;i<n;i++){
        cout<<aa[i]<<" ";
    }
    return 0;
}