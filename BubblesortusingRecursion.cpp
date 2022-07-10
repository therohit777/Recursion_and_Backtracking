#include<iostream> 
using namespace std;

void Bubblesort_usingRecursion(int a[],int n){
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    Bubblesort_usingRecursion(a,n-1);
}

int main(){
    int a[]={4,2,1,5,3};
    Bubblesort_usingRecursion(a,4);
    for(int i:a){
        cout<<i<<" "; 
    }
    return 0;
}