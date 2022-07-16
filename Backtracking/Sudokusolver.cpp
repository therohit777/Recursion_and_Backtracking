#include<iostream> 
#include<bits/stdc++.h>
using namespace std;


bool is_safe(int val,int row,int col,int n,vector<vector<int>>& board){
    for(int i =0;i<n;i++){
        if(board[row][i]==val){
            return false;
        }
        if(board[i][col]==val){ 
            return false;
        }
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val){
            return false;
        }
    }
    return true;
}


bool solve(vector<vector<int>>& board,int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(board[row][col]==0){
                for(int val=1;val<=9;val++){
                    if(is_safe(val,row,col,n,board)){
                        board[row][col]=val;
                        bool futherpossibility = solve(board,n);
                        if(futherpossibility){
                            return true;
                        }
                        else{
                            board[row][col]=0;
                        }
                    }
                }
                  return false;
            }
        }
    }
    return true;

}


void Solve_Sudoku(vector<vector<int>>& board, int n){
    solve(board,n);
}


int main(){
    vector<vector<int>> board{
                        {5,3,0,0,7,0,0,0,0},
                        {6,0,0,1,9,5,0,0,0},
                        {0,9,8,0,0,0,0,6,0},
                        {8,0,0,0,6,0,0,0,3},
                        {4,0,0,8,0,3,0,0,1},
                        {7,0,0,0,2,0,0,0,6},
                        {0,6,0,0,0,0,2,8,0},
                        {0,0,0,4,1,9,0,0,5},
                        {0,0,0,0,8,0,0,7,9}
    };
    int n = 9;
    Solve_Sudoku(board,n);
     for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
          cout<<board[row][col]<<",";
        }
        cout<<endl;
     }
    return 0;
}