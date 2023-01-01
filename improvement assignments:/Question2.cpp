#include<bits/stdc++.h>
using namespace std;
 
class node
{
    public:
    int data;
    node *next;
};

node *newnode(int value)
{
    node *temp= new node;
    temp->data= value;
    temp->next= NULL;
    return temp;
}

node *createlinkedlist(int n)
{
    int a;
    node *head= NULL;
    node *tail= NULL;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        node *temp= newnode(a);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next= temp;
            tail= temp;
        }
    }
    return head;
}

int main()
{
    int n;
    cin>>n;
    node *head= createlinkedlist(n);
    cout<<"printing list: ";
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
    return 0;
}
