#include <iostream>
#include "LinkedList.hpp"
using namespace std;

void printListContents(LinkedList<int>*);

// TO DO: Implement the driver main() function to test your code.
int main()
{
    LinkedList<int>* linkedList = new LinkedList<int>();

    //append things to list
    for(int i = 0; i < 5; i++)
    {
        linkedList->append(i);
    }

    printListContents(linkedList);


    cout << "\nNow appending 5 to list" << endl; //append test
    linkedList->append(5);

    printListContents(linkedList);


    cout << "\nNow replacing element three with 9" << endl; //replace test
    linkedList->replace(3, 9);

    printListContents(linkedList);

    cout << "Clearing list" << endl; //clear test
    linkedList->clear();

    printListContents(linkedList);

    delete linkedList;
    linkedList = nullptr;
    return 0;
}

void printListContents(LinkedList<int>* listPtr)
{
    if(listPtr->isEmpty())
    {
        cout << "List is empty" << endl;
        return;
    }

    cout << "List contents:" << endl;
    for(int i = 0; i < listPtr->getLength(); i++)
    {
        cout << listPtr->getElement(i) << endl;
    }
    cout << "Number of elements: " << listPtr->getLength() << endl;
}