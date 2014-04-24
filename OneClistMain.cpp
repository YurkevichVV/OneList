#include <iostream>
#include "OneClistFun.h"
using namespace std;
using namespace vera;

void menu();

int main()
{

    int enter;
    cout<<"For add element in the end of the list enter 1"<<endl;
    cout<<"For remove the first element of the list enter 2"<<endl;
    cout<<"For clear all list enter 3"<<endl;
    cout<<"To check, if list is empty enter 4"<<endl;
    cout<<"For output the list enter 5"<<endl;
    cout<<"For delete enter 7"<<endl;

    menu();
    return 0;
}

void menu()
{

    int enter;
    OneList onelist;
    Data datum;
    do
    {
        cout<<"Your choice:"<<endl;
        cin>>enter;
        switch (enter)
        {
        case 1:
            cout<<"You add element at the end of the list"<<endl;
            datum=inputData();
            onelist.addLastList(datum);
            break;

        case 2:
            cout<<"You remove the first element"<<endl;
            onelist.delFirstList();
            break;

        case 3:
            cout<<"You clear list"<<endl;
            onelist.clearOneList();
            break;

        case 4:
            cout<<"You check is empty list"<<endl;
            if(onelist.isEmpty())
                cout<<"List is not empty."<<endl;
            else
                cout<<"List is empty."<<endl;
            break;

        case 5:
            cout<<"You output the list"<<endl;
            onelist.outputOneList();
            break;
        }
        while(choice!='6')
        {
            cout<<"You delete it"<<endl;
            delete OneList;
        }
    }
}
