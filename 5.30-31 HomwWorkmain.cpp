#include <iostream>
#include "DollarAmount.h"
using namespace std;

int main()
{
    DollarAmount testy (5,05);
    DollarAmount testy2(5,02);
    testy.add(testy2);
    testy.Divide(2);
    cout << testy.toString();
    return 0;

}
