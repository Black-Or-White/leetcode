class Solution {  
public:  
    int romanToInt(string s) {  
        int roman[24] = {};  
        roman['I' - 'A'] = 1;  
        roman['V' - 'A'] = 5;  
        roman['X' - 'A'] = 10;  
        roman['L' - 'A'] = 50;  
        roman['C' - 'A'] = 100;  
        roman['D' - 'A'] = 500;  
        roman['M' - 'A'] = 1000;  
        int sum = roman[s[s.length() - 1] - 'A'];  
        for (int i = s.length() - 2; i >= 0; --i) {  
          if (roman[s[i] - 'A'] < roman[s[i + 1] - 'A'])  
              sum -= roman[s[i] - 'A'];  
          else  
              sum += roman[s[i] - 'A'];  
        }  
        return sum;  
    }  
};  
