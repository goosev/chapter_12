//vegnews.cpp -- использование операций new и delete с классами
#include <iostream>
using std::cout;
using std::endl;
#include "strngbad.h"

void callme1(StringBad &);      //передача по ссылке
void callme2(StringBad);        //передача по значению

int main()
{
    {
        cout << "Starting an inner block." << endl;
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spanish Leaves Bowl for Dollars");
        cout << "headline1:" << headline1 << endl;
        cout << "headline2:" << headline2 << endl;
        cout << "sports:" << sports << endl;
        callme1(headline1);
        cout << "headline1:" << headline1 << endl;
        callme2(headline2);
        cout << "headline2:" << headline2 << endl;
        cout << "Initialize one object to another:" << endl;
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:" << endl;
        StringBad knot;
        knot = headline1;
        cout << "knot:" << knot << endl;
        cout << "Exiting the block." << endl;
    }
    cout << "End of main()" << endl;
    return 0;
}

void callme1(StringBad & rsb)
{
    cout << "String passed by reference:" << endl;      //строка переданная по ссылке
    cout << " \"" << rsb << "\"" << endl;
}

void callme2(StringBad sb)
{
    cout << "String passed by value:" << endl;          //строка переданная по значению
    cout << " \"" << sb << "\"" << endl;
}
