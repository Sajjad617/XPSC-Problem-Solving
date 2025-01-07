class Solution { //C++
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int cnt = n-1;
        long long total = 0;
        int l = 0, r = n-1;
        while(l<r)
        {
            int mn = min(height[l], height[r]);
            total = max(total, (mn*cnt)*1LL);
            if(mn==height[l])
                l++;
            else
                r--;
            cnt--;
        }
        return total;
    }
};
// Java
class Solution {
    public int maxArea(int[] height) {
        int n = height.length;
        int cnt = n-1;
        int total = 0;
        int l = 0, r = n-1;
        while(l<r)
        {
            int mn = Math.min(height[l], height[r]);
            total = Math.max(total, (mn*cnt));
            if(mn==height[l])
                l++;
            else
                r--;
            cnt--;
        }
        return total;
    }
}

//C#

class Solution {
    public int maxArea(int[] height) {
        int n = height.Length;
        int cnt = n-1;
        int total = 0;
        int l = 0, r = n-1;
        while(l<r)
        {
            int mn = Math.Min(height[l], height[r]);
            total = Math.Max(total, (mn*cnt));
            if(mn==height[l])
                l++;
            else
                r--;
            cnt--;
        }
        return total;
    }
}