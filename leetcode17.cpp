class Solution {  
public:  
    vector<string> letterCombinations(string digits) {  
        vector<string> letter = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};  
        int len1 = digits.size();  
        vector<string> res;  
        if(len1 == 0) return vector<string>();  
        res.push_back("");  
        for(int i = 0; i < len1; ++i){  
            int num = digits[i] - '0';  
            if(num < 0 || num > 9) break;  
            vector<string> tmp;  
            for(int j = 0; j < letter[num].size(); ++j){  
                for(int k = 0; k < res.size(); ++k){  
                    tmp.push_back(res[k] + letter[num][j]);  
                }  
            }  
            res.swap(tmp);  
        }  
        return res;  
    }  
};  
