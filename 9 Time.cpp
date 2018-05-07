#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h"
#include <cmath>
using namespace std;

    void Time::setTime(int h,int m,int s){
        if((h >= 0 & h <24) && (m >=0 && m < 60) && (s >=0 && s < 60)){

            hour =h;
            minute = m;
            second = s;
        }
         else {
            throw invalid_argument( "time entered was not valid");
         }

    }
    int Time::ConvertToSec(Time a){
        int TotalSeconds{0};
        TotalSeconds +=(a.hour*1200);
        TotalSeconds +=(a.minute*60);
        TotalSeconds +=a.second;
        return TotalSeconds;
    }

    void Time::Sethour(int x){
        hour = x;
    }

    void Time::SetMin(int x){
        minute = x;
    }
    void Time::SetSecond(int x){
        second =x;
    }
    int Time::GetHour(){
        return hour;
    }
    int Time::GetMin(){
        return minute;
    }
    int Time::GetSec(){
        return second;
    }

    string Time::CompairTimes(Time a, Time b){
        int CompHour{0};
        int CompSec{0};
        int CompMin{0};
        CompHour = abs(abs(a.hour) - abs(b.hour));
         CompMin = abs(abs(a.minute) - abs(b.minute));
          CompSec = abs(abs(a.second) - abs(b.second));
        return "Diff between hours " + std::to_string(CompHour) + " Diff between Min " + std::to_string(CompMin) + " Diff between Sec "+ std::to_string(CompSec);
    }

    std::string Time::AddClock(Time a,Time b){
        int CompHour{0};
        int CompSec{0};
        int CompMin{0};
        CompHour = a.hour + b.hour;
        CompSec = a.second + b.second;
        CompMin = a.minute + b.minute;
        return "Hour " + std::to_string(CompHour) + " Min " + std::to_string(CompMin) + " Sec " + std::to_string(CompSec) ;
    }

    string Time::toUniversalString() const {
        ostringstream output;
        output << setfill('0') << setw(2)<<hour <<":"
        <<setw(2) << minute << ":" << setw(2) << second;
        return output.str();
    }
    string Time::toStandardString() const {
        ostringstream output;
        output <<((hour == 0 || hour == 12) ? 12 : hour %12) << ":"
        << second << (hour < 12 ? "am" : "Pm");
        return output.str();
    }
