#include <iostream>
#include "invoice.h"
using namespace std;

int main()
{
    Invoice Testy{"Bendy wrench123","A completely useless wrench that bends under pressure",2,2,0.2,0.0};
    cout << Testy.getInvoiceAmount() << endl;
    cout << Testy.getPartNumber() << endl;
    cout<<"tax = "<< Testy.getTax()<<endl;
    cout<<"enter a new part description"<<endl;
    string b;
    string c;
    int d;
    cin >> b;

    c = Testy.setPartNumber(b);
    cout <<" the new parts number/name is "<< c<<endl;

    cout << "enter a new price"<<endl;

    cin >> d;
    d = Testy.setPrice(d);
    cout << "the new price is $"<<d;

    return 0;


}
