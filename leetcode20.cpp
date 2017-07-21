class Solution {  
public:  
    bool isValid(string s) {  
        stack<char> tmp;  
        for(int i = 0; i < s.size(); ++i){  
            switch(s[i]){  
                case '(':  
                case '[':  
                case '{': tmp.push(s[i]);break;  
                case ')': if(tmp.empty() || tmp.top() != '(') return false;else tmp.pop();break;  
                case ']': if(tmp.empty() || tmp.top() != '[') return false;else tmp.pop();break;  
                case '}': if(tmp.empty() || tmp.top() != '{') return false;else tmp.pop();break;  
                default: ;  
            }  
        }  
        return tmp.empty();  
    }  
};  
