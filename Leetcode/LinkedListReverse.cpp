#include <iostream>
using namespace std;

typedef struct Node {
    int data;
    struct Node *next;
};

void display(struct Node*& head){
    struct Node *current=head;
    while(current!=NULL){
        cout << current->data << " ";
        current=current->next;
    } cout << endl;
}

void reverseList(struct Node*& head){
    struct Node *current=head, *temp, *prev=NULL;
    while(current!=NULL){
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    head = prev;
}

int main()
{
    struct Node *head=NULL, *newNode, *current;
    int n, data; cin >> n;
    for(int i=0; i<n; i++){
        cin >> data;
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        if(head==NULL) head=newNode;
        else {
           current = head;
           while(current->next!=NULL) current=current->next;
           current->next=newNode;
        }
    }
    display(head);
    reverseList(head);
    display(head);
}

