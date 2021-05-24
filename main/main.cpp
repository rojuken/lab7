#include <iostream>
#include "List.h"

int main()
{

    TList<int> temp;
    temp.InsFirst(10);
    temp.InsFirst(20);
    temp.InsFirst(30);
    temp.LoadToFile();
    cout << temp;

    return 0;
}
