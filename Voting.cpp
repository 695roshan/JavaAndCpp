// To check if a person is eligible to vote or not
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin>>age;
    if(age>=18)
        cout<<"You are eligible for voting";
    else
        cout<<"You not are eligible for voting!!";
    return 0;
}
