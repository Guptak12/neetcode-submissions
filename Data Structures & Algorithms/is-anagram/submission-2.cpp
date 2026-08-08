class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> chars_s;
        unordered_map<int,int> chars_t;

        int ss = s.length();
        int tt = t.length();
        if(ss==tt){
            for(int i = 0;i<ss;i++){
                chars_s[s[i]]++;
                chars_t[t[i]]++;

            }
       
    if(chars_s==chars_t){
        return true;
    }
    }

    return false;
}
};
