#include<iostream>

using namespace std;

typedef struct Node{
    int value;
    Node *next;
}Node;

typedef struct Queue{
    Node *head = NULL;
    Node *tail = NULL;
}Queue;

Node *createNode(int data) {
    Node *newNode = new Node();
    if (newNode == NULL) {
        return NULL;
    }
    newNode->value = data;
    newNode->next = NULL;
 
    return newNode;
}

bool IsEmpty(Queue &que){
    if(que.head == NULL) return true;
    return false;
}

void EnQueue(Queue &que, int value){

    Node *newNode = createNode(value);

    if(que.head == NULL){
        que.head = newNode;
        que.tail = newNode;
    }else{
        que.tail->next = newNode;
        que.tail = newNode;
    }
}

int DeQueue(Queue &que){
    Node *p;
    if(que.head != NULL){
        p = que.head;
        int result = p->value;
        que.head = que.head->next;
        if(que.head == NULL) que.tail = NULL;
        delete p;
        return result;
    }

    return 0;
}

int Front(Queue &que){
    if(!IsEmpty(que)){
        return que.head->value;
    }
    return 0;
}

int main(){
    Queue que;
    
    if(IsEmpty(que)) cout << "Queue rong\n";
    else cout << "Queue khong rong\n";


    for(int i = 1; i <= 10; i++) EnQueue(que, i);

    if(IsEmpty(que)) cout << "Queue rong\n";
    else cout << "Queue khong rong\n";

    for(int i = 1; i <= 10; i++) cout <<  DeQueue(que) << "-";
    cout << endl;

    if(IsEmpty(que)) cout << "Queue rong\n";
    else cout << "Queue khong rong\n";

    EnQueue(que, 10);
    cout << Front(que);

    return 0;
}