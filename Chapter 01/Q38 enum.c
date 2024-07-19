#include <stdio.h>
// Define an enum named 'Weekday'
enum Weekday {
SUNDAY, // Value = 0
MONDAY, // Value = 1
TUESDAY, // Value = 2
WEDNESDAY, // Value = 3
THURSDAY, // Value = 4
FRIDAY, // Value = 5
SATURDAY // Value = 6
};
int main() {
// Declare a variable of the enum type and initialize it
enum Weekday today = TUESDAY;
// Perform operations with the enum variable
if (today == MONDAY || today == FRIDAY) {
printf("It's a workday!\n");
} else {
printf("It's a weekend day!\n");
}
return 0;
}