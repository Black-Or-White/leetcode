class Solution {  
public:  
    vector<vector<int>> fourSum(vector<int>& nums, int target) {  
        vector<vector<int>> res;  
        int len = nums.size();  
        if(len < 4) return res;  
        std::sort(nums.begin(), nums.end());  
        for(int i = 0; i < len - 3; ++i){  
            if(i > 0 && nums[i] == nums[i - 1]) continue;  
            if(nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;  
            if(nums[i] + nums[len - 1] + nums[len - 2] + nums[len - 3] < target) continue;  
            for(int j = i+1; j < len - 2; ++j){  
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;  
                if(nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) break;  
                if(nums[i] + nums[j] + nums[len - 1] + nums[len - 2] < target) continue;  
                int front = j + 1, back = len - 1;  
                while(front < back){  
                    int sum = nums[i] + nums[j] + nums[front] + nums[back];  
                    if(sum < target) front++;  
                    else if(sum > target) back--;  
                    else{  
                        res.push_back(vector<int>{nums[i],nums[j],nums[front],nums[back]});  
                        front++; back--;  
                        while(front < back && nums[front - 1] == nums[front]) front++;  
                        while(front < back && nums[back + 1] == nums[back]) back--;  
                    }  
                }  
            }  
        }  
        return res;  
    }  
};  
