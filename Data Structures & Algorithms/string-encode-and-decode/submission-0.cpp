class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(const string& str : strs){
            encoded += str + '\0';
        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string> decoded;
        string current = "";

        for(char c : s){
            if(c == '\0'){
                decoded.push_back(current);
                current = "";
            }
            else{
                current += c;
            }
        }
        return decoded;
    }
};
