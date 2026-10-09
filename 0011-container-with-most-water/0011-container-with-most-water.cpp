class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,maxarea=0,area=0;
            while(l<r){
                area=(r-l)*min(height[l],height[r]);

                maxarea=max(area,maxarea);
                if(height[l]<height[r]){
                    l++;
                }else{
                    r--;
                }
            }
        return maxarea;
    }
};