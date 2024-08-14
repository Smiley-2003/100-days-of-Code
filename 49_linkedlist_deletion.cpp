// Deletion in Linked List
#include<iostream>
using namespace std;
 
 
 class node{
     public:
     int data;
     node*next;
     
     node(int val){
         data = val;
         next=NULL;
     }
 };
 
// //  Deletion in a linked List
// void deletion(node* &head,int val){
    
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteAtHead(head);
//         return;
//     }
    
//     node* temp = head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     node*todelete = temp->next;
//     temp->next=temp->next->next;
    
//     // delete todelete;
    
// }
 
//  Insert function insert at tail
void insertAtTail(node* &head,int val){
    
    node* n = new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

// Insert at head
void insertAthead(node* &head, int val){
    node*n = new node(val);
    n->next = head;
    head=n;
}

// Display function
void display(node* head){
    node*temp = head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    
    cout<<"NULL"<<endl;
}

bool search(node* head, int key){
    
    node* temp=head;
    while(temp != NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head=head->next;
    
    delete todelete;
}

int main(){
    
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAthead(head,4);
    display(head);
    // cout<<search(head,3)<<endl;
    // deletion(head,3);
    deleteAtHead(head);
    display(head);
    
    return 0;
}



