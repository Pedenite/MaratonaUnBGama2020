#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        bool done1, done2;
        done1 = done2 = false;
        ListNode* res;

        while (!done1 || !done2) {
            cout << "done1 " << done1 << endl;
            if (!done1) {
                cout << list1 << ' ';
                cout << list1->val << endl;

                cout << list1->next << " " << (list1->next == 0) << endl;
                done1 = list1->next == 0;
                cout << "wtf1 " << done1 << endl;

                if (!done1) {
                    cout << "upd list1\n";
                    list1 = list1->next;
                }
            }

            cout << "done2 " << done2 << endl;
            if (!done2) {
                cout << list2 << ' ';
                cout << list2->val << endl;

                cout << list2->next << " " << (list2->next == 0) << endl;
                done2 = list2->next == 0;
                cout << "wtf2 " << done2 << endl;

                if (!done2) {
                    cout << "upd list2\n";
                    list2 = list2->next;
                }
            }
        }

        return res;
    }
};