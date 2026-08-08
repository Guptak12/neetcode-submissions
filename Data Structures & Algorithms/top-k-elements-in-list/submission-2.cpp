class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        

        
        vector<pair<int,int>> a;


        for(auto it=freq.begin();it!=freq.end();it++){
            a.push_back({(*it).second,(*it).first});
        }

        sort(a.begin(),a.end());

        vector<int> b;

        for(int i = 0; i < k; i++){
            b.push_back(a[a.size() - 1 - i].second);
        }


        return b;

    }
};
