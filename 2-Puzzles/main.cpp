#include <iostream>
using namespace std;

void triangle(void) {
  // Half a square
  for (int row = 1; row <= 5; row++) {
    for (int hashNum = 1; hashNum <= 6 - row; hashNum++) {
      cout << "#";
    }
    cout << "\n";
  }
  cout << "\n";

  // Sideways triangle
  for (int row = 1; row <= 7; row++) {
    for (int hashNum = 1; hashNum <= 4 - abs(4 - row); hashNum++) {
      cout << "#";
    }
    cout << "\n";
  }
  cout << "\n";

  // Count down  by counting up
  for (int i = 1; i <= 5; i++) {
    cout << 6 - i << "\n" << endl;
  }
};

void checksum() {

};

int doubleDigitValue(int digit) {
  int doubledDigit = digit * 2;
  int sum;
  if (doubledDigit >= 10)
    sum = 1 + doubledDigit % 10;
  else
    sum = doubledDigit;
  return sum;
};

int main() {
  char digit;
  cout << "Enter a on-digit number: ";
  digit = cin.get();
  int sum = digit - '0';
  cout << "Is the sum of the digits " << sum << "? \n";
  return 0;
}
