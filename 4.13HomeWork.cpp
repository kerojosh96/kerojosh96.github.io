#include <iostream>
 
using namespace std;
 
int main()
{
    int notNegOne{0};
    double TimesAround{0};
 
    double alltrips{0};
    while (notNegOne !=-1){
    TimesAround = TimesAround +1;
 
    cout <<" enter liters used this trip"<<endl;
    double LitersThisTrip{0};
    cin >> LitersThisTrip;
    cout<<"enter km's driven"<<endl;
    double kmThisTrip{0};
    cin >> kmThisTrip;
    double LitPerKMThisTrip;
    LitPerKMThisTrip = kmThisTrip / LitersThisTrip;
 
    alltrips = (alltrips + LitPerKMThisTrip)/TimesAround;
 
    cout <<" the kms per liter this trip is " <<LitPerKMThisTrip<<endl;
 
    cout << " the kms per liter for all trips is "<< alltrips<<endl;
 
    cout << "enter -1 to exit or anything else to continue"<< endl;
    cin >> notNegOne;
 
 
 
    }
    return 0;
}
