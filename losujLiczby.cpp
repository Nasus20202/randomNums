#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    srand(time(NULL));
    fstream file;
    file.open( "dane.txt", ios::out );
    if(file.good()){
        for(int i = 0; i < 1000; i++){
            int k = rand()%1000+1;
            file << k << endl;
        }
    }
    file.close();

}
