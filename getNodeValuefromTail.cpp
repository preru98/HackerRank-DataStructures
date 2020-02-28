
// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* travers;
    SinglyLinkedListNode* traverse=NULL, *rear=NULL, *front=head;
    while(front!=NULL){
        rear=traverse;
        traverse=front;
        front=front->next;
        traverse->next=rear;
    }
    head=traverse;
    travers=head;
        for(int i=0;i<position;i++){
            travers=travers->next;
        }
        return travers->data ;
}
\