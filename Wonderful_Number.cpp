#include <iostream>
#include <string>
using namespace std;

bool isOdd(int num) {
    return num % 2 != 0;
}

bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

string toBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    return binary;
}

bool isWonderful(int N) {
    if (!isOdd(N)) {
        return false;
    }
    string binary = toBinary(N);
    return isPalindrome(binary);
}

int main() {
    int N;
    cin >> N;
    if (isWonderful(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
