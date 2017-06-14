class Solution {  
public:  
    bool isMatch(string s, string p) {  
        if(p.empty()) return s.empty();  
        if(p[1] == '*'){  
            if(!s.empty() && (s[0] == p[0] || p[0] == '.')) return isMatch(s.substr(1), p)||isMatch(s, p.substr(2));  
            else return isMatch(s, p.substr(2));  
        }else{  
            if(!s.empty() && (p[0] == s[0] || p[0] == '.')) return isMatch(s.substr(1), p.substr(1));  
            else return false;  
        }  
    }  
};  
