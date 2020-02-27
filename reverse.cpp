// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* traverse=NULL, *rear=NULL, *front=head;
    while(front!=NULL){
        rear=traverse;
        traverse=front;
        front=front->next;
        traverse->next=rear;
    }
    head=traverse;
    SinglyLinkedListNode* travers=head;

    while(travers){
        cout<<travers->data<<endl;
        travers=travers->next;
    }
}