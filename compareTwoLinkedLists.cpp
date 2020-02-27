/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* traverse1=head1, *traverse2=head2;

    while(traverse1&&traverse2){
        if(traverse1->data!=traverse2->data){
            return 0;
        }
            traverse1=traverse1->next;
            traverse2=traverse2->next;
    }
    if(traverse1 || traverse2){
        return 0;
    }
    return 1;
}