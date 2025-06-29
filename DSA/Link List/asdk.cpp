#include<iostream>

#include "CreateList.h"            // this header file has the all functions to create a list or add a Node

using namespace std;

// struct Node{
//     int data;
//     struct Node *nxt;
// };


// Above block is not needed
// As struct Node is previously defined inside "CreateList.h"

int main(){
    CreateList c;
    struct Node * head;
   
    head=c.createList(head);
    c.traverse(head);
    return 0;
}