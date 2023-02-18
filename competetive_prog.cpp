#include<iostream>
#include<vector>
using namespace std;

string reverse(string a){

    

};



class entity{

    public:
    int x=1;
};
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAtTail(node* &tail, int val){
    node* temp=new node(val);

    tail->next=temp;
    tail=tail->next;

};
void InsertAtHEad(node* &head, int d){
    node* temp= new node(d);
    temp->next=head;
    head=temp;
}
void InsertAtPosition(node* &head,int n,int d){

    node* nw=new node(d);
    
    node* temp=head;

    for(int i=0;i<n-1;i++)
    {
   
    
    temp=temp->next;
    }
    nw->next=temp->next;
temp->next=nw;


}

void print(node* head){
    node* temp=head;
    while (temp !=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    
}



int main(){
// node* node1= new node(10);

// node* head=node1;
// node* tail=node1;
// InsertAtHEad(head,12);

// InsertAtTail(tail,1);
// InsertAtTail(tail,3);

 
// InsertAtPosition(head,2,5);
// print(head);

int i=0,j,temp=0,k,a[4],size;

// int* ptr=&i;
// *ptr=*ptr+1;
// cout<<i<<endl;
// int& f=i;
// cout<<f<<endl;
// f=f+1;
// cout<<i;

string z;
cin>>z;
cout<<"ee";


// cout<<size<<endl;4


}

