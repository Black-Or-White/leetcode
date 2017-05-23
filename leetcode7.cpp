class Solution {  
public:  
    int reverse(int x) {  
        int y = 0, tmp = 0;  
        while(x){  
            tmp = y*10 + x%10;  
            if(tmp / 10 != y) return 0;  
            y = tmp;  
            x /= 10;  
        }  
        return y;  
    }  
};  
