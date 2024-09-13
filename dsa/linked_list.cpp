#include <iostream>
using namespace std;

class linkedlist{
        public:
        int Data;
        linkedlist* Next;

        linkedlist(int Data){
            this-> Data=Data;
            this->Next=NULL;
        }

        ~linkedlist(){
            int temp=this->Data;
            if (this->Next!=NULL){
                delete Next;
                this->Next=NULL;
            }
            cout<<endl<<temp <<"  is deleted";
        }

        // InsertAtHead(Node* &Head,int d){
        //     linkedlist* next=new Node()
        // }

    };

    void InsertAtHead(linkedlist* &head,int Data ){
        linkedlist* temp=new linkedlist(Data);
        temp->Next= head;
        head=temp;
    }

    void InsertAtTail(linkedlist* &tail,int Data){
        linkedlist* temp=new linkedlist(Data);
        tail -> Next=temp;
        tail =temp;
    }

    void InsertInMidlle(linkedlist* &head,linkedlist* &tail,int n,int Data){
        if (n==1){
            InsertAtHead(head,Data);
            return;
        }
        
        linkedlist* temp=new linkedlist(Data);
        linkedlist* p=head;
        int x=1;
        while (p!=NULL){
            if ((p->Next)==NULL){
                InsertAtTail(tail,Data);
                return;
            }
            else if (x==n-1){
                temp->Next=p->Next;
                p->Next=temp;
                break;
            }
            else{
                p=p->Next;
            }
            x++;
        }
    }

    void DelByPos(linkedlist* &head,int pos){
        if (pos==1){
            head=head->Next;
            return;
        }
        linkedlist* cur=head;
        linkedlist* prev=NULL;
        int x=1;
        while (x!=pos){
            prev=cur;
            cur=cur->Next;
            x++;
        }
        prev->Next=cur->Next;
        delete cur;

    }

    void printll(linkedlist* head){
        linkedlist* temp=head;
        while (temp!=NULL){
            cout<<temp->Data<<"  ";
            temp=temp->Next;
        }
    }

linkedlist* RevList(linkedlist* head,linkedlist* tail){
    linkedlist* prev=NULL;
    linkedlist* cur=head;
    linkedlist* after=head->Next;
        
    while (cur!=NULL){

        after=cur->Next;
        cur->Next=prev;
        prev=cur;
        cur=after;
        
    }
    return prev;
} 

int main(){

    linkedlist Node1=linkedlist(20);
    linkedlist* head=&Node1;
    linkedlist* tail=&Node1;

    printll(head);
    cout<<endl;

    InsertAtHead(head,30);
    printll(head);
    cout<<endl;


    InsertAtTail(tail,5);
    printll(head);
    cout<<endl;
    

    InsertInMidlle(head,tail,3,10);
    InsertInMidlle(head,tail,6,0);
    InsertInMidlle(head,tail,1,40);
    printll(head);
    cout<<endl;


    // DelByPos(head,2);
    // printll(head);
    // cout<<endl;

    // DelByPos(head,1);
    // printll(head);
    // cout<<endl;
    
    // DelByPos(head,4);
    // printll(head);
    // cout<<endl;

    // cout<<head->Data<<endl;
    // cout<<tail->Data<<endl;
    cout<<"head= "<<head->Data<<"   tail= "<<tail->Data<<endl;
    // cout<<endl<<endl;
    // head=RevList(head);
    // // cout<<head;
    // printll(head);
    // cout<<endl;

    // DelByPos(head,2);
    cout<<"head= "<<head->Data<<"   tail= "<<tail->Data<<endl;
    DelByPos(head,1);
    cout<<"head= "<<head->Data<<"   tail= "<<tail->Data<<endl;
    // DelByPos(head,2);
    
    cout<<endl;
    printll(head);
    // cout<<"head= "<<head->Data<<"   tail= "<<tail->Data;
    
    return 0;
}