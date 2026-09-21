class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int cp=target-nums[i];
            if(mp.find(cp)!=mp.end()){
                return {mp[cp],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};