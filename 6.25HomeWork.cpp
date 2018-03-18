#include <iostream>

using namespace std;
int TimeCalc(int days,int hours,int minutes)
{
    int totalInputMintues = (days*24*60) + (hours*60) + minutes ;
    return totalInputMintues;
}

int endCalc(int days1,int hours1,int minutes1,int days2,int hours2,int mintues2)
{
    return TimeCalc(days1,hours1,minutes1)-TimeCalc(days2,hours2,mintues2);
}

int main()
{
    cout << TimeCalc(0,5,30)<<endl;
    cout << " time between day1 which is day(15) hour(2) Minute(34) and day(2) hour(4) and Minute(12) Is ";
    cout << endCalc(15,2,34,2,4,12) << " minutes apart";
    return 0;
}


