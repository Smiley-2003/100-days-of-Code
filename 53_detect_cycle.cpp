#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

// Insert function insert at tail
void insertAtTail(node* &head, int val){
    
    node* n = new node(val);
    
    if(head==NULL){
        head = n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
}

// Display function
void display(node* head){
    node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    
    cout<<"NULL"<<endl;
}


//Make cycle function-> to make a cycle at given position
void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;//cycle is starting at start node
    
    int count = 1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode = temp;//temp node stored at startnode 
        }
        temp=temp->next;
        count ++;
    }
    temp -> next= startNode;
    
    return ;
}

// Detect cycle function
bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow= slow->next;
        fast= fast->next->next;
        
        if(fast == slow){
            return true;
        }
    }
    return false;
}


int main(){
    
    node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    
    display(head);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    
}