class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> hashMap;
        for(int i = 0; i < nums.size(); i++){
            int others = target - nums[i];
            if(hashMap.find(others) != hashMap.end()){
                res.push_back(hashMap[others]);
                res.push_back(i);
                return res;
            }
            hashMap[nums[i]] = i;
        }
    }
};
