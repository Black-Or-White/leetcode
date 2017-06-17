class Solution {  
public:  
    int maxArea(vector<int>& height) {  
        int area = 0;  
        int i = 0;  
        int j = height.size() - 1;  
        int h = 0, w = 0;  
        while(i < j){  
            h = min(height[i], height[j]);  
            w = j - i;  
            area = max(area, w * h);  
            while(i < j && height[i] <= h) i++;  
            while(i < j && height[j] <= h) j--;  
        }  
        return area;  
    }  
};  
