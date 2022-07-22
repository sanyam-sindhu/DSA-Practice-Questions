class Solution {
public:
    bool isRobotBounded(string s) {
    int n=s.length();
    int x=0;
    int y=0;
    int curx=0;
    int cury=0;
    int dir=0;
    for(int j=0;j<4;j++){
            for(int i =0;i<s.size();i++){
                if(dir==0){
                    if(s[i]=='G'){
                        cury+=1;
                    }else if(s[i]=='L'){
                        dir=1;
                    }else{
                        dir=3;
                    }
                }
                
            else if(dir==1){
                
                  if(s[i]=='G'){
                        curx-=1;
                    }else if(s[i]=='L'){
                        dir=2;
                    }else{
                      dir = 0;
                  }
            
            }
                
                else if(dir==2){
                
                  if(s[i]=='G'){
                        cury-=1;
                    }else if(s[i]=='L'){
                        dir=3;
                    }else{
                      dir = 1;
                  }
            
            }
                else if(dir==3){
                
                  if(s[i]=='G'){
                        curx+=1;
                    }else if(s[i]=='L'){
                        dir=0;
                    }else{
                      dir=  2;
                  }
            }   
            }
            if(x==curx && cury==y && dir==0){
                return true;
            }    
        }
        
        return false;
        
    }
};