package leetcode;

class Solution {
    public int removeDuplicates(int[] nums) {
        int res, last;
        res = last = 0;

        for (int i = 0; i < nums.length; i++) {
            if (res == 0 || nums[i] != last) {
                nums[res] = nums[i];
                last = nums[i];
                res++;
            }
        }

        return res;
    }
}
