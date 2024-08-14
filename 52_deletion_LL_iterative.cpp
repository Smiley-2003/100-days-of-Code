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

//Deletion function
void deletion(node* &head, int val){
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

// display function
void display(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    
    deletion(head,3);
    display(head);
    
    return 0;
}