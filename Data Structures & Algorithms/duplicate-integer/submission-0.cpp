class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> k;
        for(auto it = nums.begin();it!=nums.end();it++){
            k[*it]++;
            if(k[*it]>1) return true;
        }

        return false;
    }
};