#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string intToRoman(int num) {
    string result = "";
    int nums[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string strs[13] = {"I", "IV", "V", "IX", "X", "XL", "L",
                       "XC", "C", "CD", "D", "CM", "M"};
    int temp = 0;
    for (int i = 12; i >=0; i--) {
        temp = num / nums[i];
        while (temp > 0) {
            result += strs[i];
            temp--;
        }
        num = num % nums[i];
    }
    return result;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout<<intToRoman(3)<<endl;
    cout<<intToRoman(1994)<<endl;
    cout<<intToRoman(58)<<endl;
    cout<<intToRoman(1)<<endl;
    cout<<intToRoman(3999)<<endl;

    return 0;
}