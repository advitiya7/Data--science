#include<bits\stdc++.h>
using namespace std;
// write code for one pass of sorting after that call bubb sort recursively
void bubbsort(int a[],int n){
    if(n==1){
        return;
    }
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bubbsort(a,n-1);
}
int main(){
  int a[1000];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];

  }
  bubbsort(a,n);
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}