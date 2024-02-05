package leetcode;

import java.util.Collections;

class Solution {
    public String intToRoman(int num) {
        var res = "";
        var roman = RomanNumber.values();

        for (int i = 0; num > 0; i++) {
            var r = roman[i];
            var val = num / r.val;
            if (val > 0) {
                num %= r.val;

                if (val == 9) {
                    res += r.name() + roman[i-1].name();
                    continue;
                }

                if (val == 4) {
                    res += r.name() + r.mid;
                    continue;
                }

                if (val >= 5) {
                    res += r.mid;
                    val -= 5;
                }

                res += String.join("", Collections.nCopies(val, r.name()));
            }
        }

        return res;
    }

    private enum RomanNumber {
        M(1000, null),
        C(100, "D"),
        X(10, "L"),
        I(1, "V");

        int val;
        String mid;

        RomanNumber(int val, String mid) {
            this.val = val;
            this.mid = mid;
        }
    }
}
