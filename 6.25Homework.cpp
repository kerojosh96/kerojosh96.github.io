#include <iostream>
# include <cmath>
using namespace std;
int sumAnint(int num){


int sum = 0;

while ( num > 0 ) {
sum += num % 10;
num /= 10;

}
return sum;
}





int isDude(int a)  // if the sum of the output of a number is equal to a
{
    int b = a;
        // for some weird reason 17 does work
    int aacubed = pow(a,3);

    int outputsum = sumAnint(aacubed);

    if (b = outputsum){
         cout << b <<"  is a dudeney number yippe!!!!"<<endl;



    }
    if (b != outputsum){
    
    
        cout <<b<< " is not a dudeney number so sad"<<endl;
    }
    return 0;

}


int main()
{
       // cout << sumAnint(512);
    //isDude(34);
    isDude(1);
    isDude(8);
    isDude(17);
    isDude(18);
    isDude(26);
    isDude(27);
    


    return 0;
}
