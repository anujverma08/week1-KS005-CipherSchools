#include<iostream>
using namespace std;
int main(){
    int password;
    int count=0;
    while(1)
    {
        cout << "choclates" << endl;
        count++;
        if(count >100) break;
    }
//     do{
//         cin>>password;
//     }
//     while(password < 999999);
//     cout << "enter the password : ";
//     cin >> password;
//     while(password <999999){
//         cout <<"The password does not meet the rewuired condition, Please enter the password again";
//         cin >> password;

//     }
//     cout << "the user has now entered the correct password" << endl;

// }

int i;
for(i=0;i<1000;i++){
    cout << i<<" ";
    if(i>100) break;
}

return 0;