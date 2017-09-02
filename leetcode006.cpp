class Solution {  
public:  
    string convert(string s, int numRows) {  
        if(numRows <= 1) return s;  
        string *newstr = new string[numRows];  
        int len = s.length();  
        int row = 0, step = 1;  
        for(int i = 0; i < len; ++i){  
            newstr[row].push_back(s[i]);  
            if(row == 0){  
                step = 1;  
            }else if(row == numRows - 1){  
                step = -1;  
            }  
            row += step;  
        }  
        s.clear();  
        for(int i = 0; i < numRows; ++i){  
            s += newstr[i];  
        }  
        delete[] newstr;  
        return s;  
    }  
};  
