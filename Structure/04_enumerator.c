#include<stdio.h>

void main() 
{
    // 1
    enum week{MON, TUES, WED, THURS, FRI, SATUR, SUN};

    // 2
    // enum week{MON, TUES, WED = -1, THURS, FRI, SATUR, SUN};

    // Value assign to enumeration constant must be an interger constant
    // if value if not assigned to enumeration constant, then first member would be assigned with zero & other would follow
    // up with +plus 1 prior enumeration constant's value

    // enum week day1 = MON; 
    // enum week day2 = TUES; 
    // enum week day3 = WED; 
    // enum week day4 = THURS; // if any other value is assigned to the object -> compile time error   
    // enum week day5 = FRI; 
    // enum week day6 = SATUR; 
    // enum week day7 = SUN;

    enum week day1 = MON, day2 = TUES, day3 = WED, day4 = THURS, day5 = FRI, day6 = SATUR, day7 = SUN;

    printf("%d %d %d %d %d %d %d\n", day1, day2, day3, day4, day5, day6, day7);
}

// output :
// 1 : 0 1 2 3 4 5 6
// 2 : 0 1 -1 0 1 2 3