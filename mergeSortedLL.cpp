// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* third, *last, *traverse1=head1, *traverse2=head2;

    if(traverse1->data<traverse2->data){
        third=last=traverse1;
        traverse1=traverse1->next;
    }
    else{
        third=last=traverse2;
        traverse2=traverse2->next;
    }
    last->next=NULL;

    while(traverse1&&traverse2){
        if(traverse1->data<traverse2->data){
            last->next=traverse1;
            last=traverse1;
            traverse1=traverse1->next;
        }
        else{
            last->next=traverse2;
            last=traverse2;
            traverse2=traverse2->next;
        }
        last->next=NULL;
    }
    if(traverse1){
        last->next=traverse1;
    }
    else if(traverse2){
        last->next=traverse2;
    }
    return third; 
}
