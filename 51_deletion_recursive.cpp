//Reverse Node at Linked List
#include<iostream>
using namespace std;

// Delete Node at LinkedList 
class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};
// head
// 1  -> 2  -> 3 -> 4 -> NULL
// |     |     |
// prev curr next


void deleteAtHead(node* &head){
    
    node* todelete=head;
    head=head->next;
    
    delete todelete;
}


//Deletion function
void deletion(node* &head, int val){
    
    
    if(head==NULL){
        return;
    }
    
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next = temp->next->next;
    
    delete todelete;
}


//Insert function insert at tail
void insertAtTail(node* &head, int val){
    
    node* n = new node(val);
    
    if(head==NULL){
        head=n;
        return ;
    }
    
    node* temp= head;
    while(temp->next!=NULL){
        temp = temp->next; 
    }
    temp->next=n;
}



// Insert at head
void insertAthead(node* &head, int val){
    node* n = new node(val);
    n -> next = head;
    head = n;
    
}

// Display function
void display(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// reverse Recursive

node* reverseRecursive(node* &head){
    
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next=NULL;
    
    return newhead;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    while(currptr != NULL){
        nextptr=currptr ->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        
    }
    return prevptr;
}

int main(){
    
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    
    deleteAtHead(head);
    deletion(head,3);
    display(head);
    node* newhead = reverseRecursive(head);
    display(newhead);
    return 0;
}