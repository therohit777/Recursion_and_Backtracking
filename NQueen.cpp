#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void addup(int n,vector<vector<int>> boards,vector<vector<int>>& ans){
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp.push_back(boards[i][j]);
        }
    }
    ans.push_back(temp);
}




bool is_safe(int row, int col ,vector<vector<int>> boards,int n){

    int x= row;
    int y= col;
    //For Row
    while(y>=0){
        if(boards[x][y]==1){
            return false;
        }
        y--;
    } 


    x=row;
    y=col;
    // For Diagonals
    while(x>=0 && y>=0){
        if(boards[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
 
    x=row;
    y=col;
    while(x<n && y>=0){
        if(boards[x][y]==1){
            return false;
        }
        x++;
        y--;
    }
    return true;
}


void solve(int col,int n,vector<vector<int>>& boards, vector<vector<int>>& ans){
    if(col==n){
        addup(n,boards,ans);
        return;
    }
    for(int row=0;row<n;row++){
        if(is_safe(row,col,boards,n)){
            boards[row][col]=1;
            solve(col+1,n,boards,ans);
            boards[row][col]=0;
        }
    }
}


int main(){
    int n=4;
    vector<vector<int>> boards(n,vector<int>(n,0) );
    vector<vector<int>> ans;

    solve(0,n,boards,ans);

    for(int i=0;i<n;i++){
        for(auto j:ans[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}