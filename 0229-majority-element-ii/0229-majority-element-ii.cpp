class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(auto i:nums){
            mp[i]++;
        }
        vector<int>ans;
        for(auto [x,cnt]:mp){
            if(cnt>n/3)
                ans.push_back(x);
        }
        
        return ans;         
    }
};