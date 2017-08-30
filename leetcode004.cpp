class Solution {  
public:  
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {  
        vector<int> nums;  
        int len1 = nums1.size();  
        int len2 = nums2.size();  
        int len = len1 + len2;  
        int index1 = 0, index2 = 0;  
        for(int i = 0; i < len; i++){  
            if(index1 < len1 && index2 < len2){  
                if(nums1[index1] < nums2[index2]){  
                    nums.push_back(nums1[index1]);  
                    index1++;  
                }else{  
                    nums.push_back(nums2[index2]);  
                    index2++;  
                }  
            }else if(index1 >= len1 && index2 < len2){  
                nums.push_back(nums2[index2]);  
                index2++;  
            }else if(index2 >= len2 && index1 < len1){  
                nums.push_back(nums1[index1]);  
                index1++;  
            }else{  
                nums.push_back(0);  
            }  
        }  
        if(len%2){  
            return (double)nums[(len-1)/2];  
        }else{  
            return (double)(nums[len/2-1] + nums[len/2])/2;  
        }  
    }  
};  
