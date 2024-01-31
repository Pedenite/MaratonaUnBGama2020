class Solution {
public:
    int climbStairs(int n) {
        int opts = 1;
        for (int twos = 1; twos <= n/2; twos++) {
            int steps = n - twos;
            opts += (int) comb(steps, twos);
        }

        return opts;
    }

private:
    long comb(long n, long r) {
        // return perm(n, r) / perm(r, r);

        if (r > 0) {
            return n * comb(n-1, r-1)/r;
        }
        
        return 1;
        
    }

    long perm(long n, long r) {
        return r > 0 ? n * perm(n-1, r-1) : 1;
    }
};
