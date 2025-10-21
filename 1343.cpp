class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int allsum = 0;
        for (int i = 0; i < k; i++) {
            allsum += arr[i];
        }
        int sth = k * threshold;
        int cnt = 0;
        if (allsum >= sth) cnt++;
        for (int i = k; i < arr.size(); i++) {
            allsum -= arr[i - k];
            allsum += arr[i];
            if (allsum >= sth) cnt++;
        }
        return cnt;
    }
};