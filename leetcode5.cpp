class Solution {  
public:  
    string longestPalindrome(string s) {  
        int len = s.length();  
        string newstr = "$#";  
        for(int i = 0; i < len; i++){  
            newstr += s[i];  
            newstr += '#';  
        }  
        int maxlen = 0;  
        int pos = 0;  
        int newlen = newstr.length();  
        int searchRes[newlen];  
        for(int i = 0; i < newlen; i++){  
            searchRes[i] = maxlen > i ?min(searchRes[2*pos-i], maxlen - i):1;  
            while(newstr[i + searchRes[i]] == newstr[i - searchRes[i]]) searchRes[i]++;  
            if(i + searchRes[i] > maxlen){  
                maxlen = i + searchRes[i];  
                pos = i;  
            }  
        }  
        int maxvalue = 0, index = 0;  
        for(int i = 0; i < newlen; i++){  
            if(maxvalue < searchRes[i]){  
                maxvalue = searchRes[i];  
                index = i;  
            }  
        }  
        string res;  
        int start = index%2 ? ((index-1)/2 - (maxvalue-1)/2) : ((index-2)/2 - (maxvalue/2-1));  
        int end = index%2 ? ((index-1)/2 -1 + (maxvalue-1)/2) : ((index-2)/2 + (maxvalue/2-1));  
        for(int i = start; i <= end; i++){  
            res += s[i];  
        }  
        return res;  
    }  
};  
