class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            map<char,int> a;

            for(int j=0;j<strs[i].size();j++){
                a[strs[i][j]]++;
            }

           
            mp[a].push_back(strs[i]);
            
        }
        vector<vector<string>> v;
        for(auto it=mp.begin();it!=mp.end();it++){
            v.push_back((*it).second);
        }

        return v;
    }
};
