class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // 1. Check every row
        for (int i = 0; i < 9; i++) {
            unordered_set<char> seen;
            for (int j = 0; j < 9; j++) {
                char current = board[i][j];
                if (current != '.') {
                    if (seen.count(current)) return false;
                    seen.insert(current);
                }
            }
        }

        // 2. Check every column
        for (int j = 0; j < 9; j++) {
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++) {
                char current = board[i][j];
                if (current != '.') {
                    if (seen.count(current)) return false;
                    seen.insert(current);
                }
            }
        }

        // 3. Check every 3x3 sub-box
        // rowBlock and colBlock point to the top-left corner of each 3x3 grid
        for (int rowBlock = 0; rowBlock < 9; rowBlock += 3) {
            for (int colBlock = 0; colBlock < 9; colBlock += 3) {
                unordered_set<char> seen;
                
                // Scan the individual 3x3 box
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char current = board[rowBlock + i][colBlock + j];
                        if (current != '.') {
                            if (seen.count(current)) return false;
                            seen.insert(current);
                        }
                    }
                }
                
            }
        }

        return true;
    }
};