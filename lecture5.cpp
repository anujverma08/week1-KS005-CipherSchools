#include<iostream>
using namespace std;
int main(){
    // int x;
    // int a[5];
    // int a,b,c,d,e;
    // cout << "give 5 integers as input" << endl;
    // cin >> a >> b >> c >> d >> e;
    // cout << "reverse order is : " << e << d << c << b << a;
    
    int a[10];
    cout << "give 10 intgers as input" << endl;
    for(int i=0;i<10;i++){
        cin >> a[i];
    }
    cout  << "the given 10 input are : "<< endl;

    for(int i=0;i<10;i++){
        cout << a[i] << endl;
    }
    return 0;
}