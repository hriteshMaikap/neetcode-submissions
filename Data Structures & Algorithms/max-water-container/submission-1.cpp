class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int curArea = 0;
        int i = 0;
        int j = heights.size()-1;

        while (i<j){
            int tempArea = min(heights[i],heights[j])*(j-i);
            curArea=max(curArea,tempArea);
            if (heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }

        return curArea;
    }
};
