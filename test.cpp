#include <iostream>
using namespace std;

int main() {

    long int num = 787986533456;
    long int i = 3;
    long int remainder;
    bool flag;
    long int max = (num / 2);

    while (i < max) {
        remainder = num % i;
        if (remainder == 0) {
            cout << num << " equals " << i << " multiplied by " << (num / i) << endl;
            flag = true;
        }
        i = i + 2;
    }
    if (flag != true) {
        cout << num << " is prime.";
    }

    return 0;
}