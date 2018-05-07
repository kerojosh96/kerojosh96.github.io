#include <string>

#ifndef TIME_H
#define TIME_H



class Time {
public:
    void setTime(int,int,int);
    std::string toUniversalString()const;
    std::string toStandardString()const;
    int ConvertToSec(Time a);
    void Sethour(int x);
    void SetMin(int x);
    void SetSecond(int x);
    int GetHour();
    int GetMin();
    int GetSec();
    std::string AddClock (Time a, Time B);
    std::string CompairTimes(Time a,Time b);

private:
 unsigned int hour {0};
 unsigned int minute{0};
 unsigned int second{0};

unsigned int TotalSec{0};



};


#endif // TIME_H
