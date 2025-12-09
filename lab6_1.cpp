#include<iostream>
using namespace std;

int main(){
    int num, odd_count = 0, even_count = 0;

    do {
        cout << "Enter an integer: ";
        cin >> num;
        
        if (num != 0) {
            if (num % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    } while (num != 0);

    cout << "#Even numbers = " << even_count << "\n";
    cout << "#Odd numbers = " << odd_count;
    return 0;
}
