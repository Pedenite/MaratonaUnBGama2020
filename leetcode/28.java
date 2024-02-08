package leetcode;

class Solution {
    public int strStr(String haystack, String needle) {
        // return haystack.indexOf(needle, 0); // correct response
        int res = -1, j = 0;

        for (int i = 0; i < haystack.length(); i++) {
            if (haystack.charAt(i) != needle.charAt(j)) {
                i -= j;
                j = 0;
                continue;
            }

            if (j == 0) {
                res = i;
            }

            j++;

            if (j == needle.length()) {
                return res;
            }
        }

        return -1;
    }
}
