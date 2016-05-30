/* ADDS Prac Exam 2016 Semester 1
 *
 * Create a directory 2016/s1/adds/pracexam/ inside your SVN and add the
 * current file. Your submission should contain one file, which should be based
 * on modifying the current one. The submission process is the same as usual
 * (commit to SVN and then submit on Websubmission). However, you do not need
 * to submit a design. The exam is out of 10 marks. You need at least 4 to pass
 * the hurdle requirement.
 *
 *
 * Problem 1 (4 marks, 2 for functionality, 2 for style)
 *
 * Implement: Node* addIfNotExist(Node* head, int data)
 *
 * Given the head pointer of a list ("head"), insert "data" to the front of
 * the list if and only if "data" doesn't already exist in the list. Return the
 * new head pointer. You do not need to worry about efficiency for this part.
 *
 *
 * Problem 2 (6 marks, 3 for functionality, 3 for style)
 *
 * Implement: Node* concat(Node* list1, Node* list2)
 *
 * Given the head pointers of two separate linked lists, find an efficient way
 * to concat them into one list. By concating, I mean either attach list1 at
 * the end of list2 (set list2's last link to the head of list1), or vice versa
 * (either is fine as long as it is efficient in terms of complexity). You are
 * not supposed to create any new nodes for this task. The function should
 * return the head pointer of the joint list.
 *
 * We assume at least one of the lists is short (up to 10 nodes), but we don't
 * know which one is the short one. Your concat function should take only O(1)
 * complexity (even if the longer list is infinitely long). If your function
 * takes more than O(1), you lose 1.5 marks on functionality.
 *
 *
 * You are only permitted to modify sections labelled as "fill in here". Please
 * leave the other sections (e.g., the main function and all function
 * protocols) intact. We require this so that marking is manageable given
 * limited time (this is also the reason why we put everything in one file).
 */

#include<iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* addIfNotExist(Node* head, int data) {
    bool isThere=false;		//declares a boolean to store whether it is there
    Node* ptr=head;

    //runs through the linked list to see if the data is already in it
    while(ptr!=NULL){
        if(ptr->data==data){
            isThere=true;	//if the data is there changes the boolean
        }
	else{
        }
        ptr=ptr->next;
    }
    if(isThere==false){		//if it doesnt exist adds the data to the front
        Node* oldHead=head;
        head=new Node;
	head->data=data;
	head->next=oldHead;
    }
    return head; 
}

Node* concat(Node* list1, Node* list2) {
    Node* ptrL1=list1;
    Node* ptrL2=list2;
    bool l=false;			//to check which list is the short list
    int i=0;

    //O(1) since we know the short list is less than 10 nodes
    //iterating through the nodes to find which is the short list
    for(i=0;i<10;i++){
	if(ptrL1->next==NULL){
            l=true;
            break;
        }
        else if(ptrL2->next==NULL){
            l=false;
            break;
        }
        ptrL1=ptrL1->next;
        ptrL2=ptrL2->next;
    }

    //joining the long list to the end of the short list
    if(l==true){
        ptrL1->next=list2;
        return list1;
    }
    else{
        ptrL2->next=list1;
        return list2;
    }
}

void disp(Node* head) {
    // Print the list. Format: HEAD->1->2->3->NULL
    // This function is provided to help you debug your code
    Node* current = head;
    cout << "HEAD->";
    while (current) {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}

Node* initialize(int a, int b) {
    // a and b are integers, a < b
    // This function initializes the following list 
    // HEAD->a->a+1->a+2->...->b->NULL
    Node* head = NULL;
    for (int i = b; i >= a; i--) {
        Node* tmp = new Node;
        tmp->data = i;
        tmp->next = head;
        head = tmp;
    }
    return head;
}

void houseKeeping(Node* head) {
    // housekeeping, free all nodes
    Node* tmp;
    while (head) {
        tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main() {
    Node* list1 = initialize(2, 5); // Initialize HEAD->2->3->4->5->NULL
    list1 = addIfNotExist(list1, 1); // Should now becomes HEAD->1->2->3->4->5->NULL
    list1 = addIfNotExist(list1, 1); // Should not change at all
    list1 = addIfNotExist(list1, 5); // Should not change at all
    disp(list1);

    Node* list2 = initialize(6, 10000); // Long list
    Node* concatResult1 = concat(list1, list2);
    disp(concatResult1); // should be HEAD->1->2->...->10000->NULL

    Node* list3 = initialize(4, 10000); // Another long list
    Node* list4 = initialize(1, 3); // Another short list
    Node* concatResult2 = concat(list3, list4);
    disp(concatResult2); // should be HEAD->1->2->...->10000->NULL

    houseKeeping(concatResult1);
    houseKeeping(concatResult2);
}
