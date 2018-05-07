 #include <iostream>
#include "Time.h"
#include<vector>
//Josh Cook
using namespace std;

int main()
{
    Time a;
    Time b;
    a.setTime(15,34,46);
    b.setTime(13,12,35);
    cout << a.toUniversalString();
    cout <<" Number of seconds in Time Object " << a.ConvertToSec(a)<<endl;
    cout << a.CompairTimes(a,b)<<endl;
    cout <<"adding two clocks together we get "<<endl;
    cout <<a.AddClock(a,b);
    return 0;
}
