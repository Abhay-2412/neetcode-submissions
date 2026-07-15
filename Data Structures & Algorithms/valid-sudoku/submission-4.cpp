class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0; i<9; i++)
        {
            int visited[9] ={0};
            for(int j = 0; j<9; j++)
            {
                if(board[i][j] > 48 && board[i][j] <= 57 )
                {
                    if(visited[board[i][j] - '1'] == 0)
                    visited[board[i][j] - '1']++;
                    else return false;
                }
            }

        }

        for(int i = 0; i<9; i++)
        {
            int visited[9] = {0};
            for(int j = 0; j<9; j++)
            {
                if(board[j][i] > 48 && board[j][i] <= 57 )
                {
                    if(visited[board[j][i] - '1'] == 0)
                    visited[board[j][i] - '1']++;
                    else return false;
                }
            }

        }

        for(int square = 0; square < 9; square++)
        {
            int visited[9] = {0};
            for(int i = 3*(square/3); i<(square/3 +1)*3; i++)
            {
                for(int j = 3*(square%3); j<(square%3 +1)*3; j++)
                {
                    if(board[i][j] > 48 && board[i][j] <= 57 )
                    {
                        if(visited[board[i][j] - '1'] == 0)
                        visited[board[i][j] - '1']++;
                        else return false;
                    }
                }

            }    
        }

        return true;
        
    }
};
