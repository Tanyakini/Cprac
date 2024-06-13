struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode* current = &dummy;
    dummy.next = NULL;

    // Iterate through both lists until we reach the end of one
    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    // Attach the remaining nodes of list1 or list2, if any
    if (list1 != NULL) {
        current->next = list1;
    } else {
        current->next = list2;
    }

    // Return the merged list, starting from the next of dummy node
    return dummy.next;
    
}