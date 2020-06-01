//
// Created by vijay on 5/25/20.
//

#include "MergeTwoSortedLists.h"


ListNode* MergeTwoSortedLists::mergeTwoLists(ListNode* l1, ListNode* l2){
    ListNode result;
    ListNode *l1Next = l1;
    ListNode *l2Next = l2;
    ListNode *resultNext = &result;
    while (l1Next !=nullptr && l2Next != nullptr){

        if(l1Next->val <l2Next->val){
            int i = l1Next ->val;
            ListNode *newn = new ListNode();
            newn->val = i;
            resultNext -> next = newn;
            l1Next = l1Next ->next;
        } else {
            int j = l2Next ->val;
            ListNode *newn = new ListNode();
            newn->val = j;
            resultNext->next = newn;
            l2Next = l2Next ->next;
        }
        resultNext = resultNext->next;
    } if(l1Next == nullptr && l2Next != nullptr){
        resultNext->next = l2Next;
    }if(l2Next == nullptr && l1Next != nullptr){
        resultNext->next = l1Next;
    }
    return result.next;
}
