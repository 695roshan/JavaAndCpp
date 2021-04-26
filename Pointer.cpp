// To print array elements using pointer
#include <iostream>
using namespace std;
int main() {
    int a[5],i;
    int *p=a;
    for(i=0;i<5;i++){
        cout << "Enter element "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"Showing the elements of the array\n";
    for(i=0;i<5;i++)
        cout << *p++<<" ";
    return 0;
}
