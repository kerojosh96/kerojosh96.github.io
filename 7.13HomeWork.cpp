#include <iostream>
#include <array>
#include <vector>
using namespace std;

int CheckToSee(vector<int> test,int numberToCheck)
{
    int NumToCheck{0};
    int a{0};
    for(int a = 0; a < 20; a++)
    {
        if (test[a] == numberToCheck)
        {
            return 55;


        }


    }

}
int main()
{
    vector<int> test1{0};
    int x;

    for(int a = 0; a< 21; a++)
    {
        cout <<a << ": enter a number between 10 and 100 #";
        cin >> x;


        if (CheckToSee(test1,x)!=55)
        {
            test1.push_back(x);


        }

    }
    cout <<"the vector has a value of";
    for (int i = 0; i < test1.size(); ++i)
    {
        if(test1[i] !=0)
        {
            cout << ","<< test1[i];
        }
    }
}
