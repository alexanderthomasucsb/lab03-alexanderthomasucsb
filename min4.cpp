#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])  {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int c = atoi(argv[3]);
        int d = atoi(argv[4]);
        int smallest = a;
        if(b<smallest){
                smallest = b;
        }
        if(c<smallest){
                smallest = c;
        }
        if(d<smallest){
                smallest = d;
        }
        cout << smallest << endl;

        return 0;
}
