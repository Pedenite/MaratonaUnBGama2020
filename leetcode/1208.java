package leetcode;

import java.util.Arrays;

class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        Arrays.sort(arr);

        int[] occ = new int[arr.length];

        int j = 0;
        for (int i = 0; i < arr.length; i++) {
            if (i != 0 && arr[i] != arr[i-1]) {
                j++;
            }

            occ[j]++;
        }

        Arrays.sort(occ);

        for (int i = 1; i < occ.length; i++) {
            if (occ[i] != 0 && occ[i] == occ[i-1]) {
                return false;
            }
        }

        return true;
    }
}
