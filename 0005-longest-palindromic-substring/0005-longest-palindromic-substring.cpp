class Solution {
public:
    string longestPalindrome(string s){
        if(s.empty()) return "";
        int l,r,n=s.size(),start=0,maxlen=1;
        for(int i=0;i<n;i++){
            l=i;
            r=i;
            while(l>=0 &&r<n && s[l]==s[r]){
                if(r-l+1 > maxlen){
                    maxlen=r-l+1;
                    start=l;
                }
                l--,r++;
            }
            l=i;
            r=i+1;
            while(l>=0 &&r<n && s[l]==s[r]){
                if(r-l+1 > maxlen){
                    maxlen=r-l+1;
                    start=l;
                }
                l--,r++;
            }
            

        }
        return s.substr(start,maxlen);
    }
};