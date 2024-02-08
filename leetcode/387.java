package leetcode;

import java.util.ArrayList;
import java.util.Collections;
import java.util.stream.Collectors;

class Solution {
    public int firstUniqChar(String s) {
        var list = s.chars().boxed().collect(Collectors.toList());
        Collections.sort(list);

        var uniqueList = new ArrayList<Character>();

        int selected = 0;
        boolean isUnique = false;
        for (var elem : list) {
            if (isUnique) {
                if (elem == selected) {
                    isUnique = false;
                } else {
                    uniqueList.add((char) selected);
                    selected = elem;
                }

                continue;
            }

            if (elem != selected) {
                isUnique = true;
                selected = elem;
            }
        }

        if (isUnique) {
            uniqueList.add((char) selected);
        }

        int index = uniqueList.isEmpty() ? -1 : Integer.MAX_VALUE;
        for (var c : uniqueList) {
            index = Math.min(index, s.indexOf(c));
        }

        return index;
    }

    public int optimizedFirstUniqChar(String s) {
        int ans = Integer.MAX_VALUE;
        for (char c = 'a'; c <= 'z'; c++) {
            int index = s.indexOf(c);
            if (index != -1 && index == s.lastIndexOf(c)) {
                ans = Math.min(ans,index);
            }
        }

        return ans == Integer.MAX_VALUE ? -1 : ans;
    }
}
