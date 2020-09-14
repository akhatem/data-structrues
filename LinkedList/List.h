#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <string>

using namespace std;

class List{
private:
    typedef struct node{
        node* next;
        string data;
    }* nPtr;

    nPtr h, c, t;

public:
    List();
    void AddNode(string data);
    void DelNode(string data);
    void AddAtBegin(string data);
    void AddAtGivenPostion(string data, string pd);
    void PrintList();
};


#endif // LIST_H_INCLUDED
