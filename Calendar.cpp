#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printCalendar(int monthDay, string firstDay) {
    string daysOfWeek[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    
    // Find the index of the first day
    int firstDayIndex = -1; // Initialize with an invalid value
    for (int i = 0; i < 7; i++) {
        if (daysOfWeek[i] == firstDay) {
            firstDayIndex = i;
            break;
        }
    }
    
    // Print the header row with spaced-out headers
    for (int i = 0; i < 7; i++) {
        cout << setw(5) << daysOfWeek[i]; // Adjusted width to add spacing
    }
    cout << endl;
    
    // Initialize variables for tracking day and count breaks and line breaks
    int dayCount = 1;
    
    // Skip the days before the first day of the month
    for (int i = 0; i < firstDayIndex; i++) {
        cout << setw(5) << " "; // Adjusted width to add spacing
    }
    
    // Print the calendar
    for (int i = 0; i < 7; i++) {
        for (int j = firstDayIndex; j < 7; j++) {
            if (dayCount <= monthDay) {
                cout << setw(5) << dayCount; // Adjusted width to add spacing
                dayCount++;
            } else {
                break;
            }
        }
        
        // If there are more days to print, move to the next line
        if (dayCount <= monthDay) {
            cout << endl;
        } else {
            break;
        }
        
        // Reset the starting day index for the next line
        firstDayIndex = 0;
    }
}

int main() {
    int monthDay;
    string firstDay;

    cout << "Enter the number of days\n";
    cin >> monthDay;

    if (monthDay > 31 || monthDay < 28) {
        cout << "Invalid number of days. Enter the correct number of days\n";
        cin >> monthDay;
    }

    cout << "Enter the day of the week the first day falls (eg. MON, TUE, WED, etc.)\n";
    cin >> firstDay;

    printCalendar(monthDay, firstDay);
    return 0;
}