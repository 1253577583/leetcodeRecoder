class Solution {
    public:
        vector<int> getAverages(vector<int>& nums, int k) {
            if (nums.size() <= 2 * k) {
                return vector<int>(nums.size(),-1);
            }
            vector<int> res(nums.size(),-1);
            //zhongxin = k+0,k+1,k+2 ... , size-1-k
            long long sum = 0;
            for(int i = 0; i < 2*k+1; i++){
                sum += nums[i];
            }
            res[k] = sum / (k*2+1);
            for(int i = k+1; i < nums.size()-k; i++){
                sum -= nums[i-k-1];
                sum += nums[i+k];
                res[i] = sum / (k*2+1);
            }
    
            return res;
        }
    };