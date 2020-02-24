
// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {

    if(head!=NULL){
        SinglyLinkedListNode *traverse=head;
        if(!position){
            head=head->next;
            delete traverse;
        }
        else{
            SinglyLinkedListNode *save;
            for(int i=0;i<position-1;i++){
                traverse=traverse->next;
            }
            save=traverse->next;
            traverse->next=save->next;
            delete save;
        }
    }
    return head;
}