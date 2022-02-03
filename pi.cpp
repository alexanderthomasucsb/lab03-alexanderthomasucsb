#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    int n = 0;
    float approxPi = 0.0;

    while(n>=0){
        cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
        cin >> n;
        for(int i = 0; i <=n; ++i){
            if(i%2 == 0){
                approxPi = approxPi + 1.0/(2*i+1.0);
            }
            else{
                approxPi = approxPi + -1.0/(2*i+1.0);
            }

        }
        if(n>=0){
        cout << std::setprecision(4);
        if(n==0){
            cout << "The approximate value of pi using " << n+1 <<  " term is: " << "4.000" << endl;
        }
        else{
            cout << "The approximate value of pi using " << n+1 <<  " terms is: " << 4 * approxPi << endl;
        }

        approxPi = 0.0;
        }
    }
    return 0;
}
