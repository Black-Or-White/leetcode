class Solution {  
public:  
    vector<vector<int>> threeSum(vector<int>& nums) {  
        vector<vector<int>> res;  
        vector<int> tmp(3, 0);  
        std::sort(nums.begin(), nums.end());  
        int front = 0, back = nums.size(), target = 0, sum = 0;  
        for(int i = 0; i < nums.size(); ++i){  
            target = -nums[i];  
            front = i + 1;  
            back = nums.size() - 1;  
            while(front < back){  
                sum = nums[front] + nums[back];  
                if(sum < target) front++;  
                else if(sum > target) back--;  
                else{  
                    tmp[0] = nums[i];  
                    tmp[1] = nums[front];  
                    tmp[2] = nums[back];  
                    res.push_back(tmp);  
                    while(front < back && nums[front] == tmp[1]) front++;  
                    while(front < back && nums[back] == tmp[2]) back--;  
                }  
            }  
            while(front < nums.size() && nums[i] == nums[i + 1]) i++;  
        }  
        return res;  
    }  
};  
