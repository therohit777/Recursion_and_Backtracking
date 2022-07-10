#include<iostream> 
using namespace std;

void Insertionsort_usingRecursion(int a[],int n,int i){
   if(i==n){
    return ;
   }

   int min = a[i];
   int j=i-1;
   for(;j>=0;j--){
    if(a[j]>min){
        a[j+1]=a[j];
    }
    else{
        break;
    }
   }
   a[j+1]=min;
   
   Insertionsort_usingRecursion(a,n,i+1);
}

int main(){
    int a[]={4,2,1,5,3};
    Insertionsort_usingRecursion(a,5,1);
    for(int i:a){
        cout<<i<<" "; 
    }
    return 0;
}