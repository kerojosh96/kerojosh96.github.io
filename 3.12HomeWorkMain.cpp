#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date testy(3,2,34);
    Date testy2(-23,4,2016);
    cout<< testy.displayDate()<<endl;
    cout << testy2.displayDate();
    cout << " the year has been changed to " << testy.setyear(2017)<<endl;
    cout << "the new year is "<<testy.getYear()<<" (" <<testy.displayDate() <<")";

}
