#include<iostream>
using namespace std;
int main(){
    // float a,b;
    // cin >> a >> b;
    // if (a>0.1 || b>a){
    //     cout << "the condition in if statement is correct";//will only be printed if the statement in the parenthesis is true
    // }
    // else{
    //     cout << "the condition is false";

    // }


// int a,b,c,d;
// cout << "give three integers as input :a,b and c" << endl;
// cin >> a >> b >> c >>d;
// if(a>b && c>d){
//     cout << haha;
// }
// else if(a>b && c<d){
//     cout << "hehe";
// }
// else{
//     cout << "huhu";
// }
int a;
cout << "enter a integer a ";
cin >> a;
switch (a)
{
    case 1:
        cout << "the value of a is 1";
        break;
    case 2:
        cout << "the value of a is 2";
        break;
    case 3:
        cout << "the value of a is 3";
    default:
        cout << "default is always printed";
}
    
}