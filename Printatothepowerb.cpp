#include<iostream>
using namespace std;

// Approach1
// int A_tothepowerof_B(int a,int b){
//    if(b==0){
//     return 1;
//    }
//    return a*A_tothepowerof_B(a,b-1);
// }


// Approach2(Optimised to logn time complexity.)
int A_tothepowerof_B(int a,int b){
   if(b==0){
    return 1;
   }
   if(b==1){
    return a;
   }

   int ans = A_tothepowerof_B(a,b/2);

   if(b%2==0){
    return ans*ans;
   }
   else{
    return a*ans*ans;
   }

}

int main(){
    int a=2;
    int b=20;
    cout<<A_tothepowerof_B(a,b);
    return 0;
}