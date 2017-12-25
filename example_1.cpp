#include <iostream>

using namespace std;

int main(){
    int a[10] ={0,1,2,3,4,5,6,7,8,9};
    int b[10] ={10,11,12,13,14,15,16,17,18,19};
    int c[20];
    int n=10;
    
    for(int i=0; i<n;i++){
        c[i] = a[i];
        c[i+10] = b[i];
    }

    for(int i=0; i<n+10;i++){
        cout << c[i] << endl;
    }

}
