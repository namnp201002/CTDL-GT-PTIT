#include<iostream>

using namespace std;

typedef struct Node{
    int value;
    Node *next;
}Node;

typedef struct Stack{
    Node *head = NULL;
}Stack;

Node *createNode(int data) {
    Node *newNode = new Node();
    if (newNode == NULL) {
        return NULL;
    }
    newNode->value = data;
    newNode->next = NULL;
 
    return newNode;
}

bool IsEmpty(Stack &st){
    if(st.head == NULL){
        return true;
    }
    return false;
}

void Push(Stack &st, int value){
    Node* newNode = createNode(value);
    if(st.head == NULL){
        st.head = newNode;
    }else{
        newNode->next = st.head;
        st.head = newNode;
    }
}

int Pop(Stack &st){
    Node *p;
    if(!IsEmpty(st)){
        p = st.head;
        st.head = p->next;
        int val = p->value;
        delete p;
        return val;
    }
    return 0;
}

int Top(Stack &st){
    if(!IsEmpty(st)){
        return st.head->value;
    }
    return 0;
}

int main(){
    Stack st;
    
    if(IsEmpty(st)) cout << "Stack rong\n";
    else cout << "Stack khong rong\n";


    for(int i = 1; i <= 10; i++) Push(st, i);

    if(IsEmpty(st)) cout << "Stack rong\n";
    else cout << "Stack khong rong\n";

    for(int i = 1; i <= 9; i++) cout <<  Pop(st) << "-";
    cout << endl;

    if(IsEmpty(st)) cout << "Stack rong\n";
    else cout << "Stack khong rong\n";

    cout << Top(st);

    return 0;
}
