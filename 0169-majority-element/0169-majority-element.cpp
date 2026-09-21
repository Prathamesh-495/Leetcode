class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int maxcnt=INT_MIN,maxfreq=0;
        for(auto [i,cnt]:mp){
            if(cnt>maxcnt){
                maxcnt=cnt;
                maxfreq=i;
            }
        }
        return maxfreq;
    }
};