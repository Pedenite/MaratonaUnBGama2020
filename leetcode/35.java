package leetcode;

class Solution {
    public int searchInsert(int[] nums, int target) {
        int first = 0;
        int last = nums.length - 1;
        while (first < last) {
            int i = (first+last) / 2;
            if (nums[i] == target) {
                return i;
            }

            if (nums[i] > target) {
                last = i-1;
                continue;
            }

            first = i+1;
        }

        return (int) ((first+last) / 2)+1;
    }
}
