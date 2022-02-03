#include <iostream>
using namespace std;

int main( int argc, char *argv[]) {

    int rows = 420;
    int columns = 69;

    while(rows > 0 && columns >0){

    	cout << "Enter number of rows and columns:\n";
    	cin >> rows;
    	cin >> columns;

    	for(int i = 0; i < rows; ++i){
        	for(int j = 0; j < columns; ++j){
            	cout << "X.";
        	}	
        	cout << endl;
    	}		
    }

    return 0;
}
