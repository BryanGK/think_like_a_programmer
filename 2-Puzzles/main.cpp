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

int doubleDigitValue(int digit) {
  const int doubledDigit = digit * 2;
  if (doubledDigit >= 10)
    return 1 + doubledDigit % 10;
  return doubledDigit;
};

void checksum() {
  char digit;
  int position = 1;
  int oddChecksum = 0;
  int evenChecksum = 0;
  cout << "Enter a number to be CHECKED: ";
  digit = cin.get();
  while (digit != 10) {
    if (position % 2 == 0) {
      evenChecksum += digit - '0';
      oddChecksum += doubleDigitValue(digit);
    } else {
        evenChecksum += doubleDigitValue(digit);
        oddChecksum += digit - '0';
      }
    
    digit = cin.get();
    position++;
  }
  int checksum;
  if ((position -1) % 2 == 0)
    checksum = evenChecksum;
    else
      checksum = oddChecksum;
    cout << "Checksum is " << checksum << ". \n";
    if (checksum % 10 == 0)
    {
      cout << "Checksum is divisible by 10. Valid \n";
  } else {
    cout << "Checksum is NOT divisible by 10. INVALID \n";
  }
};

int main() {
  checksum();
  return 0;
}
