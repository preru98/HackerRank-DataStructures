
// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *newNode=new SinglyLinkedListNode(data);
     
    if(head!=NULL){                 //non empty list
        if(!position){              //position 0
            newNode->next=head;
            head=newNode;
        }
        else{
            SinglyLinkedListNode *traverse=head;

            for(int i=0;i<position-1;i++){
                traverse=traverse->next;
            }
            newNode->next=traverse->next;
            traverse->next=newNode;
        }
    }
    else{
        head=newNode;
    }
    return head;
}
