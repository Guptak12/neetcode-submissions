class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans(2);
        // sort(nums.begin(),nums.end());
        for(int i =0; i<n-1;i++){
            int j =i+1;
            while(j<n){
                if(nums[i]+nums[j]==target){
                    ans[0]=i;
                    ans[1]=j;
                    return ans;
                }
                j++;
            }
        }

    }
};
