// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *prev=head,*traverse=head->next;

    while(traverse!=NULL){
        if(traverse->data==prev->data){
            prev->next=traverse->next;
            delete traverse;
            traverse=prev->next;
        }
        else{
            prev=traverse;
            traverse=traverse->next;
        }
    }
    return head;
}
