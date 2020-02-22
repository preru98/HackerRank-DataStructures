
// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    if(head!=NULL){
        SinglyLinkedListNode* traverse=head;
        while(traverse!=NULL){
            cout<<traverse->data;
            cout<<endl;
            traverse=traverse->next;
        }
    }
}
