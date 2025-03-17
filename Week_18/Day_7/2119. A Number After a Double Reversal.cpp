class Solution {
    public:
        bool isSameAfterReversals(int num) {
            // string s = to_string(num);
            // string ns = reverse
            int temp = num;
            int cal = 0;
            while(temp)
            {
                cal *= 10;
                cal += temp%10;
                temp /= 10;
            }
            temp = cal;
            cal = 0;
            while(temp)
            {
                cal *= 10;
                cal += temp%10;
                temp /= 10;
            }
            if(cal==num)
                return true;
            else
                return false;
    
        }
    };