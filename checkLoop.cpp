
// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* traverse=head,*save=head;
    do{
        traverse=traverse->next;
        save=save->next;
        if(save){
            save=save->next;
        }
    }while(traverse&&save&&traverse!=save);
    if(traverse==save){
        return true;
    }
    return false;

}
