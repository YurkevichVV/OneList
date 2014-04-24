#include "OneClistFun.h"
#include <iostream>

using namespace std;

namespace vera
{
Data inputData()
{
    Data datum;
    cout<<"Enter the data: ";
    cin>>datum;
    return datum;
}


OneList::OneList():
    head(nullptr),tail(nullptr)
{}

OneList::~OneList()
{
    clearOne();
}

void OneList::addLastList(Data datum)
{
    Node *p=nullptr;
    p=new  Node;

    if(nullptr==first&&nullptr==last)
    {
        p->link=nullptr;
        last=p;
        first=p;
    }
    else
    {
        p->link=nullptr;
        last->link=p;
        last=p;
    }

    p->datum=datum;
    p=nullptr;
}

void OneList::delFirstList()
{
    if(first)
    {
        Node *p=first;
        first=first->link;
        p->link=nullptr;
        p->datum=0;
        delete p;
        p=nullptr;
    }
}

void OneList::clearOneList()
{
    Node *p=nullptr;
    p=last;
    while(last)
    {
        p=last->link;
        delete last;
        last=p;
    }
    first=nullptr;
    last=nullptr;
}

void OneList::outputOneList() const
{
    Node *p=nullptr;
    p=first;
    while(p)
    {
        cout<<p->datum<<endl;
        p=p->link;
    }
}

bool OneList::isEmpty() const
{
    return (head&&tail);
}

}
