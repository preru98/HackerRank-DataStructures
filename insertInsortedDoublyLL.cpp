
// Complete the sortedInsert function below.

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

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

    DoublyLinkedListNode* newNode=new DoublyLinkedListNode(data);
    if(!head){//empty list
        newNode->next=newNode->prev=NULL;
        head=newNode;
    }
    else if(data<head->data){ //first position insertion
        newNode->next=head;
        newNode->prev=NULL;
        head->prev=newNode;
        head=newNode;
    }
    else{
        DoublyLinkedListNode* traverse= head;
        while(traverse){
            
            if(traverse->data>data){
                
                newNode->prev=traverse->prev;
                traverse->prev->next=newNode;
                traverse->prev=newNode;
                newNode->next=traverse;
                break;
            }
            if(traverse->next){
                traverse=traverse->next;
            }
            else{
                traverse->next=newNode;
                newNode->prev=traverse;
                newNode->next=NULL;
                break;
            }
        }
    }
    return head;
}

/*
Test Solution
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

    DoublyLinkedListNode* node=new DoublyLinkedListNode(data);
 
    if(!head){          //empty
        head=node;
        node->prev=NULL;
        node->next=NULL;
    }
    else if(data<head->data){ //insertion at begn.
        node->next=head;
        head->prev=node;
        head=node;
    }
    else{
        DoublyLinkedListNode* tr=head;
        while(tr){
            if(tr->data>data){
                node->next=tr;
                node->prev=tr->prev;
                tr->prev->next=node;
                tr->prev=node;
                break;
            }
            if(tr->next==NULL){
                tr->next=node;
                node->prev=tr;
                node->next=NULL;
                break;
            }
            tr=tr->next;
        }
    }
    return head;
}

*/