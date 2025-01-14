class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int cnt = 0;
        vector<int> freq(51);
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            freq[A[i]]++;
            if(freq[A[i]]==2) cnt++;
            freq[B[i]]++;
            if(freq[B[i]]==2) cnt++;
            v.push_back(cnt);
        }
        return v;

    }
};