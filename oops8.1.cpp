#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;

    // helper functions
    bool isLeapYear(int y) {
        return (y%4 == 0 && y%100 != 100) || (y%400==0);
    }

    int daysInMonth(int month, int year) {
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) {
            return 31;
        }
        else if(month == 2) {
            if(isLeapYear(year)) {
                return 29;
            } else {
                return 28;
            }
        } else {
            return 30;
        }
    }

public:
    // Constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // display date
    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }

    // pre increment
    Date operator++() {
        day += 1;

        // if day exceeds days in current month
        if(day > daysInMonth(month,year)) {
            day = 1;
            month += 1;

            // if month is 13
            if(month >=13) {
                month = 1;
                year += 1;
            }
        }
        return *this;
    }

    // post increment
    Date operator++(int) {
        Date temp = *this;
        day += 1;

        // if day exceeds days in current month
        if(day > daysInMonth(month,year)) {
            day = 1;
            month += 1;

            // if month is 13
            if(month >=13) {
                month = 1;
                year += 1;
            }
        }
        return temp;
    }

    // += increment
    Date operator+=(int value) {
        for(int i=1; i<=value; i++) {
            day += 1;
            // if day exceeds days in current month
            if(day > daysInMonth(month,year)) {
                day = 1;
                month += 1;

                // if month is 13
                if(month >=13) {
                    month = 1;
                    year += 1;
                }
            }
        }
        return *this;
    }

};
 
int main() {
    Date d(28,2,2000);

    d.display();                

    (d+=(540)).display();         
}
