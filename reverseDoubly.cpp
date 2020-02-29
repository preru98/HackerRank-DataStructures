

// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode *traverse=head, *save;
    while(traverse){
        save=traverse->next;
        traverse->next=traverse->prev;
        traverse->prev=save;
        if(!traverse->prev){
            head=traverse;
        }
        traverse=traverse->prev;
    }
    return head;
}
