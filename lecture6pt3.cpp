#include<iostream>
using namespace std;
int main(){
    // int i;
    // i=3;
    // while(i<101){
    //     cout << i<<" ";
    //     i++;
    // }

    int i;
    int input;

    for(i=1;i<100;i++){
        cin >> input;
        if(input == 65){
            cout << "congrats you have guesses correct";
            break;
        }
    }
}