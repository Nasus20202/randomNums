#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    srand(time(NULL));
    fstream fileIn, fileOut;
    fileIn.open( "dane.txt", ios::in);
    fileOut.open("pary.txt", ios::out);
    int s = 0;
    if(fileIn.good()){
        int n;
        while (fileIn >> n) {
            nums.push_back(n); s++;
        }
    }
    fileIn.close();

    for(int i = 0; i < s/2; i++){
        int a, b;
        a = rand()%nums.size();


        fileOut << nums[a]<<" - ";

        nums.erase(nums.begin()+a);

        b = rand()%nums.size();
        fileOut << nums[b]<<endl;
        nums.erase(nums.begin()+b);

    }

    fileOut.close();

}
