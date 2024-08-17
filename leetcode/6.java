package leetcode;

class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        StringBuilder[] setup = new StringBuilder[numRows];
        String res = "";
        int j = 0;
        int direction = 1;

        for (byte c : s.getBytes()) {
            if (setup[j] == null) {
                setup[j] = new StringBuilder();
            }

            setup[j].append((char) c);

            if (j == 0 || j == numRows-1) {
                direction = j < numRows-1 ? 1 : -1;
            }

            j += direction;
        }

        for (StringBuilder st : setup) {
            if (st != null) {
                res += st.toString();
            }
        }

        return res;
    }
}