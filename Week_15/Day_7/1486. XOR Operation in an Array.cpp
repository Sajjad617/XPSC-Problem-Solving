class Solution {
    public:
        int xorOperation(int n, int start) {
            int cal = 0;
            for(int i=0; i<n; i++)
            {
                cal ^= start+2*i;
            }
            return cal;
        }
    };