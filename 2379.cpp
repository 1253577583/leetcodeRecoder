class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        //[1,0,0,0,1,1,1,0,1]
        //连续K的子数组中，W的最大数量

        int cnt = 0; //count W
        for(int i = 0; i < k; i++){
            if(blocks[i] == 'B') cnt++;
        }
        //
        int maxcnt = cnt;
        for(int i = k; i < blocks.size(); i++){
            if(blocks[i-k] == 'B') cnt--;
            if(blocks[i] == 'B') cnt++;
            if(cnt > maxcnt) maxcnt = cnt;
        }
        //
        if(maxcnt >= k) return 0;
        return k - maxcnt;
        
    }
};