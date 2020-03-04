#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main() {
    srand(time(NULL));
    fstream file;
    vector <int> v;
    file.open( "dane.txt", ios::out );
    if(file.good()){
        while(v.size()<100) {
            int k = rand()%1000+1;
            bool isUnique = true;
            for(int i = 0; i < v.size(); i++){
                if(v[i]==k) {
                    isUnique = false;
                    break;
                }
            }
            if(isUnique) {
                v.push_back(k);
                file << k << endl;
            }
        }
    }
    file.close();

}
