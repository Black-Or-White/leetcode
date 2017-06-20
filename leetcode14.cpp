class Solution {  
public:  
    string longestCommonPrefix(vector<string>& strs) {  
        string prefix = "";  
        int id1 = 0, id2 = 0;  
        int len = strs.size();  
        while(len != 0){  
            for(id2 = 0; id2 < len; ++id2){  
                if(id1 >= strs[id2].size() || (id2 > 0 && strs[id2][id1] != strs[id2 - 1][id1])){  
                    return prefix;  
                }  
            }  
            prefix += strs[0][id1];  
            id1++;  
        }  
        return prefix;  
    }  
};  
