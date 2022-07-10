#include<iostream> 
using namespace std;

bool Reversestring(string s,int i){
    if(i>s.length()-i-1){
        return true;
    }

    if(s[i]!=s[s.length()-i-1]){
        return false;
    }

    return Reversestring(s,i+1);
}

int main(){
    string s= "RohoR";
    cout<<Reversestring(s,0);
    return 0;
}