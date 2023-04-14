#include "linkedlist.hpp"
#include <iostream>
using namespace std;
linkedlist::linkedlist(){
    head=new Node;
    head=NULL;
}

int linkedlist::getNumOfNodes(){
    return numOfNodes;
};
void linkedlist::Print(){
    Node* temp;
    temp=new Node;

    if(head==NULL)
        cout<<"There are no nodes to be printed"<<endl;
    else{
        temp=head;
        while(temp->next!=NULL){
            cout<<"Value: "<<temp->value<<" Occurance: "<<temp->occurance<<endl;
            temp=temp->next;
        }
        cout<<"Value: "<<temp->value<<" Occurance: "<<temp->occurance<<endl;
    }
};

void linkedlist::Insert(int n){
    Node*temp;
    Node*temp2;
    temp=new Node;
    temp2=new Node;
    if(head==NULL)
    {
        temp->value=n;
        temp->occurance=1;
      head=temp;
        numOfNodes++;
    }
    else{
        temp=head;
        while((temp->next!=NULL)&&(temp->value!=n)){
            temp=temp->next;
        }
        if(n==temp->value)
            temp->occurance++;
        else{
            temp2->value=n;
            temp2->occurance=1;
            temp->next=temp2;
            numOfNodes++;
        }
    }
};
void linkedlist::Remove(int pos){
    Node* temp=head;
    Node*temp2;
    if(pos==1)
    {
        
    head=temp->next;
    free(temp);
        numOfNodes--;
    }
    else{
        for(int i=1;i<pos-1;i++)
            temp=temp->next;
        temp2=temp->next;
        temp->next=temp2->next;
        free(temp2);
        numOfNodes--;
    }
};


int linkedlist::getSum(){
    Node *temp;
    int sum=0;
    temp=head;
    if(head==NULL)
    {
        cout<<"Nothing to be added"<<endl;
        return 0;
    }
    if(head->next==NULL)
    {
        sum=(temp->value*temp->occurance);
        return sum;
    }
    while(temp->next!=NULL){
        sum=sum+((temp->value)*(temp->occurance));
        temp=temp->next;
    }
    sum=sum+((temp->value)*(temp->occurance));
return sum;
};
