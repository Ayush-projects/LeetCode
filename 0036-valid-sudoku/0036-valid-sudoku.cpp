class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
//         vector<set<char>> row(9), column(9), block(9);
//         for(int i=0; i<9; i++)
//         {
//             for(int j=0; j<9; j++)
//             {
//                 if(board[i][j]=='.')
//                     continue;
//                 if(row[i].count(board[i][j]) || column[j].count(board[i][j]) || block[(i/3)*3 + j/3].count(board[i][j]))
//                     return false;
                
//                 row[i].insert(board[i][j]);
//                 column[j].insert(board[i][j]);
//                 block[(i/3)*3 + j/3].insert(board[i][j]);
//             }
//         }
        
        
        
        
        
        
        
        for(int i=0; i<9; i++)
        {
             unordered_map<int, int> m;
            for(int j=0; j<9; j++)
            {   if(board[i][j] !='.')
                m[board[i][j]-'0']++;
            }
            for(auto k: m)
            {
               if(k.second >1)
               {   cout<<"first";
                   return false;
               }
            }
            
        }
        
        for(int j=0; j<9; j++)
        {    
            unordered_map<int, int> m;
            for(int i=0; i<9; i++)
            {
                 if(board[i][j] !='.')
                m[board[i][j]-'0']++;
                
            }
            for(auto k: m)
            {
               if(k.second >1)
               {    cout<<"second";
                   return false;
               }
            }
            
        }
      
        vector<set<int>> v(9);
        
        
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                int index = (i/3)*3 + (j/3);
                 if(board[i][j] != '.')
                 {
                if(v[index].count(board[i][j])==1)
                { 
                    return false;
                }
                else
                    
                {
                    v[index].insert(board[i][j]);
                }
                 }
            }
            
        }
        
        
        
        
        
        
        
        
        
        
        
        
    
        
        
        return true;
        
        
        
    }
};