#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *newnode(int value){
    node *temp = new node;
    temp->data = value;
    temp->next = NULL;
    return temp;
}

node *createlinkedlist(int n){
    int a;
    node *head=NULL;
    node *tail= NULL;
    for(int i=0; i<n; i++){
        cin>>a;
        node *temp = newnode(a);
        if(head==NULL){
            head = temp;
 			tail = temp;
        }
 		else{
            tail->next = temp;
 			tail = temp;
 		}
 	}
 
 	return head;
 }

void printlinkedlist(node *head){
	while(head!=NULL){
		cout<<head->data<<"-> ";
		head = head->next;
	}
	cout<<"null\n";
}

node *mergetwosortedlinkedlist(node *head1, node* head2){
	node *newHead=NULL;
	node *newTail=NULL;
 
	while(head1!=NULL && head2!=NULL){
		node *temp;
		if(head1->data < head2->data){
			temp = head1;
			head1 = head1->next;
		}
		else{
			temp=head2;
			head2 = head2->next;
		}
 
			if(newHead==NULL){
                newHead= temp;
            }
        else{
            newTail->next = temp;
		}
        newTail = temp;
	}
    if(newHead==NULL){
		if(head1!=NULL){
			newHead = head1;
		}
		else{
			newHead = head2;
		}
	}
	else{
		if(head1!=NULL){
			newTail->next = head1;
		}
		else{
			newTail->next = head2;
		}
	}
 
	return newHead;
}
 
int main() {
	int n,m;
	cin>>n>>m;
	node* head1 =createlinkedlist(n);
	cout<<"first linkedList: "; 
	printlinkedlist(head1);
 
	node* head2 = createlinkedlist(m);
	cout<<"second linkedList: "; 
	printlinkedlist(head2);
 
	node *head= mergetwosortedlinkedlist(head1, head2);
 
	cout<<"sorted linkedList: "; 
	printlinkedlist(head);
    return 0;
}
