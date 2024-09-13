#include <iostream>
using namespace std;

class c_list{
    public:
        int Data;
        c_list* Next;

        c_list( int Data){
            this-> Data=Data;
            this->Next=NULL;
        }
};

void InsertAtHead(c_list* &tail,int Data){
    c_list* temp=new c_list(Data);
    temp->Next=tail->Next;
    tail->Next=temp;
}

void InsertAtTail(c_list* &tail,int Data){
    c_list* temp=new c_list(Data);
    temp->Next=tail->Next;
    tail->Next=temp;
    tail=temp;

}

InsertAtPos(c_list* &tail,int pos, int Data){
    int c=0;
    c_list* temp=tail->Next;
    
    while (c!=pos-1){
        c++;
        temp=temp->Next;
    }
    c_list* tempnode=new c_list(Data);
    tempnode->Next=temp->Next;
    temp->Next=tempnode;
}

RemoveByPos(c_list* &tail,int pos){
    int c=0;
    c_list* temp=tail->Next;
    
    while (c!=pos-1){
        c++;
        temp=temp->Next;
    }
    c_list* cur=temp->Next;
    temp->Next=cur->Next;
    delete cur;
}


void PrintList(c_list* &tail){
    c_list* temp=tail->Next;
    while (temp!=tail){
        cout<<temp->Data<<"  ";
        temp=temp->Next;
    }
    cout<<temp->Data;
}

int main(){

    c_list Node1=c_list(20);
    c_list* tail=&Node1;
    tail->Next=tail;

    InsertAtHead(tail,30);
    InsertAtHead(tail,45);
    InsertAtHead(tail,50);
    InsertAtTail(tail,10);
    InsertAtTail(tail,5);

    InsertAtPos(tail,2,40);
    RemoveByPos(tail,1);

    PrintList(tail);
    return 0;
}