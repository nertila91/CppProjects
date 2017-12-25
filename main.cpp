#include <iostream>
#include "math.h"

using namespace std;

int main(int argc, char **argv){
    for(int i=0; i<10;i++){
        cout << "Hello worlds: " << add(i,i) << " " << prod(i,i) << " " << diff(i,i) << " " << division(i,i) <<  endl;
    }
}