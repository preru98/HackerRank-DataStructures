
// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode *traverse1=head1,*traverse2=head2;
    while(traverse1!=traverse2){
        traverse1=traverse1->next!=NULL?traverse1->next:head2;
        traverse2=traverse2->next!=NULL?traverse2->next:head1;
    }
    return traverse1->data;
}
