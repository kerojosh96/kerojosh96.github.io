#include <iostream>

using namespace std;

double reverseEpo(int base,int times)
{

    int counter = times;
    int x= base;
    while (counter > 1)
    {
        x = x * base;
        counter = counter -1;
    }
    return x;
}
int main()
{
    cout << reverseEpo(3,4);
    return 0;
}
