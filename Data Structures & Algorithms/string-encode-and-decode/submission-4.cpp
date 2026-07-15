class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for (const string& s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }
        return encoded;
    }
    

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.size())
        {
            int j = i;
            while(s[j] != '#')j++;
            int size_str = stoi(s.substr(i,j-i));
            string content = s.substr(j+1,size_str);
            result.push_back(content);

            i = j + size_str+1;
        }
        return result;
    }
};
