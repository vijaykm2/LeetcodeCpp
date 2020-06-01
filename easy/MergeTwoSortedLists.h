//
// Created by vijay on 5/25/20.
//

#ifndef LEETCODECPP_MERGETWOSORTEDLISTS_H
#define LEETCODECPP_MERGETWOSORTEDLISTS_H


struct ListNode {
    ListNode(ListNode *pNode) {
        val = pNode ->val;
        next = pNode->next;
    }

    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class MergeTwoSortedLists {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};


#endif //LEETCODECPP_MERGETWOSORTEDLISTS_H
