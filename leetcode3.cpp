class Solution {  
public:  
    int lengthOfLongestSubstring(string s) {  
        map<int, int> hashMap;  
        int len = s.length();  
        int head = -1;  
        int maxlen = 0;  
        for(int i = 0; i < len; i++){  
            hashMap[s[i]] = -1;  
        }  
        for(int i = 0; i < len; i++){  
            if(hashMap[s[i]] > head){  
                head = hashMap[s[i]];  
            }  
            hashMap[s[i]] = i;  
            maxlen = max(maxlen, i - head);  
        }  
        return maxlen;  
    }  
};  
