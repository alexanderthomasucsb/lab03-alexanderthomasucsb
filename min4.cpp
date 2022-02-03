#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])  {
        
        if (argc != 5) {
                cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl;
                cerr << " Prints smallest of the four numbers" << endl;
                exit(1);
        }
        
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
