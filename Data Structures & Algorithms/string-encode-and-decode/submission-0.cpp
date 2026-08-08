class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(int i=0;i<strs.size();i++){
            encoded_string+=strs[i]+'\n';
        }
        return encoded_string;

    }

    vector<string> decode(string s) {
        vector<string> strs2;
        string k;
        for(int i=0;i<s.size();i++){
            if(s[i]!='\n'){
                k+=s[i];
            }else{
                strs2.push_back(k);
                k="";
            }
        }

        return strs2;
    }
};
