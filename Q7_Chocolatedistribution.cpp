class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        if (n == 0 || m == 0)
        return 0;
        sort(a.begin(),a.end());
        int minDifference = INT_MAX;
        for (int i = 0; i + m - 1 < n; ++i) {
        int difference = a[i + m - 1] - a[i];
        if (difference < minDifference) {
            minDifference = difference;
        }
    }
    return minDifference;
    }   
};