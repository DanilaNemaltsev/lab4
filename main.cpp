#include <iostream>
#include "Deque.h"

using namespace std;


int main()
{
    Deque <int> dq(5);


    dq.pushBack(14);
    dq.print();
    dq.pushBack(4);
    dq.print();
    dq.pushBack(5);
    dq.print();
    dq.pushFront(35);
      dq.print();
    dq.popBack(1,11);
dq.print();
 dq.popFront(1,11);
dq.print();





    return 0;
}
