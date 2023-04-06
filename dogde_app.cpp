#include <iostream>
using namespace std;

int main() {
  int day, month, year;

  cout << "Please enter a date (dd mm yyyy): ";
  cin >> day >> month >> year;

  // check if the year is a leap year or not
  bool isLeapYear = false;
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        isLeapYear = true;
      }
    } else {
      isLeapYear = true;
    }
  }

  // check if the date is valid or not
  bool isValidDate = true;
  if (month < 1 || month > 12) {
    cout << "Invalid month: " << month << endl;
    isValidDate = false;
  } else {
    if (day < 1 || day > 31) {
      cout << "Invalid day of month " << day << endl;
      isValidDate = false;
    } else if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)) {
      cout << "Invalid day of month " << day << " for month " << month << endl;
      isValidDate = false;
    } else if (month == 2) {
      if (isLeapYear) {
        if (day > 29) {
          cout << "Invalid day of month " << day << " for month " << month << " in leap year" << endl;
          isValidDate = false;
        }
      } else {
        if (day > 28) {
          cout << "Invalid day of month " << day << " for month " << month << " in non-leap year" << endl;
          isValidDate = false;
        }
      }
    }
  }

  // display appropriate message based on the validity of the date and leap year status
  if (isValidDate) {
    cout << day << "/" << month << "/" << year << " is a valid date ";
    if (isLeapYear) {
      cout << "and also a Leap Year" << endl;
      cout << "The next twenty Leap years are: ";
      for (int i = year + 4; i <= year + 80; i += 4) {
        if ((i % 100 != 0) || (i % 400 == 0)) {
          cout << i << ", ";
        }
      }
      cout << endl;
    } else {
      cout << "but not a Leap Year" << endl;
    }
  }

  return 0;
}
