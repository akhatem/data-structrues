#include <bits/stdc++.h>

#include "List.h"

using namespace std;

List::List(){
    h = c = t = NULL;
}

void List::AddNode(string data){
    nPtr n = new node;
    n->next = NULL;
    n->data = data;

    if(h != NULL){
        c = h;
        while(c->next != NULL){
            c = c->next;
        }
        c->next = n;
    }
    else{
        h = n;
    }
}

void List::AddAtBegin(string data){
    nPtr n = new node;
    n->data = data;
    if (h != NULL){
        n->next = h;
        h = n;
    }
    else{
        n->next = NULL;
        h = n;
    }
}

void List::AddAtGivenPostion(string data, string cd){
    nPtr n = new node;
    n->data = data;
    if(h != NULL){
        c = h;
        while(c->next != NULL && c->data != cd){
            c = c->next;
        }
        n->next = c->next;
        c->next = n;
    }
    else{
        n->next = NULL;
        h = n;
    }
}

void List::DelNode(string data){
    nPtr dPtr = NULL;
    t = c = h;
    while(c != NULL && c->data != data){
        t = c;
        c = c-> next;
    }
    if(c == NULL){
        cout << data << "is not found!\n";
        delete dPtr;
    }
    else{
        dPtr = c;
        c = c ->next;
        t->next = c;
        if(dPtr == h){
            h = h->next;
            t = NULL;
        }
        delete dPtr;
        cout << "The node with data " << data << " is deleted successfully!\n";
    }
}

void List::PrintList(){
    if(h != NULL){
        c = h;
        while(c != NULL){
            if(c->next == NULL) cout << c->data << '\n';
            else cout << c->data << ' ';
            c = c->next;
        }
    }
    else{
        printf("List is empty!\n");
    }
}
