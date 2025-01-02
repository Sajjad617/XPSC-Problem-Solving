class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> v;
        double k = celsius + 273.15;
        v.push_back(k);
        double f = celsius * 1.80 + 32.00;
        v.push_back(f);
        return v;
    }
};