#ifndef ONECLISTFUN_H
#define ONECLISTFUN_H

using namespace ctd;

namespace vera
{

typedef int Data;

Data inputData();

class OneList
{
public:
    OneList();
    ~OneList();

    void addLastList(Data datum);
    void delFirstList();
    void clearOneList() noexcept;
    void outputOneList() const;
    bool isEmpty() const noexcept;
private:
    OneList (const OneList &original);
    OneList & operator = (const OneList & rhs);
    struct Node
    {
        Data datum;
        Node *link;
    }
    Node *first,Node *last;
};
}

#endif
