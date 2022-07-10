#include<iostream> 
using namespace std;


// Approach1 using 2 pointers.
// string Reversestring(string s,int start,int end){
//     if(start>end){
//         return s;
//     }

//     swap(s[start],s[end]);

//     return Reversestring(s,start+1,end-1);
// }



string Reversestring(string s,int i){
    if(i>s.length()-i-1){
        return s;
    }

    swap(s[i],s[s.length()-i-1]);

    return Reversestring(s,i+1);
}

int main(){
    string s= "Rohit";
    cout<<Reversestring(s,0);
    return 0;
}