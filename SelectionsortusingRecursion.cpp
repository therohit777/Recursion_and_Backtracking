#include<iostream> 
using namespace std;

void Selectionsort_usingRecursion(int a[],int n){
    if(n==0||n==1){
        return;
    }

    for(int i=0;i<n;i++){
        if(a[i]<a[0]){
            swap(a[i],a[0]);
        }
    }
    Selectionsort_usingRecursion(a+1,n-1);
}

int main(){
    int a[]={4,2,1,5,3};
    Selectionsort_usingRecursion(a,5);
    for(int i:a){
        cout<<i<<" "; 
    }
    return 0;
}