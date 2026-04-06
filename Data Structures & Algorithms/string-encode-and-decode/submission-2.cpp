class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str = "";
        for(string s : strs)
        {
            encoded_str+=s;
            encoded_str+='\0';
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string res = "";
        for(char c : s)
        {
            if(c != '\0')
            {
                res+=c;
                continue;
            }

            result.push_back(res);
            res = "";
        }
        return result;
    }
};
