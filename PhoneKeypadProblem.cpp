#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

void Phonekeypad_Problem(string a,int index,string output,vector<string>& ans,vector<string> mapping){
    if(index>=a.length()){
        ans.push_back(output);
        return;
    }

    int digitvalues = a[index]-'0';
    string mappedstring=mapping[digitvalues];

    for(int i=0;i<mappedstring.length();i++){
        output+=mappedstring[i];
        Phonekeypad_Problem(a,index+1,output,ans,mapping); 
        output.pop_back();
    }   
}

int main(){
    string a = "23";

    string output;
    vector<string> ans;
    vector<string> mapping = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    Phonekeypad_Problem(a,0,output,ans,mapping);

    for(int i=0;i<ans.size();i++){
        for(auto j:ans[i]){
          cout<<j<<" ";
        }
        cout<<endl; 
    }
    return 0;
}