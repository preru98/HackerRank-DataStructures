
// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
    if(llist!=NULL){
        newNode->next=llist;
    }
    llist=newNode;
    return llist;
}
