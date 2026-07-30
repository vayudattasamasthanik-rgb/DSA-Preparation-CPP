#include <iostream>
using namespace std;
void Pattern(int n){
    for (int i = 0; i < n ;i ++){
        for (int j = 1 ; j <= (n-i-1); j = j + 1){
            cout <<" " ;
        
        }
        for (int k = 0 ; k < (i*2 + 1); k++){
            cout << "*";
        }
        for (int j = 1 ; j <= (n-i-1); j = j + 1){
            cout <<" " ;  
        }          
        cout << endl ;
    }
}
int main(){int x;
    cin >> x;
    Pattern(x);
}

 
