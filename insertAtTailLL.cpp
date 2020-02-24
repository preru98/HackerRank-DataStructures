// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    
    SinglyLinkedListNode* newNode= new SinglyLinkedListNode(data);

    if(head){
        SinglyLinkedListNode* traverse=head;
        while(traverse->next!=NULL){
            traverse=traverse->next;
        }
        traverse->next=newNode;
    }
    else{
        head=newNode;
    }
	return head;
}
