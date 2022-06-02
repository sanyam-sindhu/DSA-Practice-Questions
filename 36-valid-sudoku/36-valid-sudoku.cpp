class Solution {
public:
  bool isValid(vector<vector<char>>&board,char c,int row,int col){
      int cnt1=0,cnt2=0,cnt3=0;
      for(int i=0;i<9;i++){
          if(board[i][col]==c)
          {cnt1++;}
          if(board[row][i]==c)
          {cnt2++;}
          if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
          {cnt3++;}
      }
      if(cnt1==1&&cnt2==1&&cnt3==1){
          return true;}
      else{
          return false;}
  }
public:
bool isValidSudoku(vector<vector<char>>& board) {
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]!='.'){
                if(isValid(board,board[i][j],i,j)==false){
                    return false;
                }
            }
        }
    }
    return true;
}
  };