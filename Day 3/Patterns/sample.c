#include <stdio.h>

int main() {
    int n = 5, sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum += 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}

// n = 5
// Step1: i = 0, 0 < 5 - T
//             j = 0, 0 < = 0 - T
//                 sum = sum + 1 => sum = 0 + 1 = 1
// Step1: i = 0, 0 < 5 - T
//             j = 1, 1 < = 0 - F
// Step1: i = 1, 1 < 5 - T
//             j = 0, 0 < = 1 - T
//                 sum = 1 + 1 = 2
// Step1: i = 1, 1 < 5 - T
//             j = 1, 1 < = 1 - T
//                 sum = 2 + 1 = 3
// Step1: i = 1, 1 < 5 - T
//             j = 2, 2 < = 1 - F
// Step1: i = 2, 2 < 5 - T
//             j = 0, 0 < = 2 - T
//                 sum = 4
// Step1: i = 2, 2 < 5 - T
//             j = 1, 1 < = 2 - T
//                 sum = 5
// Step1: i = 2, 2 < 5 - T
//             j = 2, 2 < = 2 - T
//                 sum = 6
// Step1: i = 2, 2 < 5 - T
//             j = 3, 3 < = 2 - F
// Step1: i = 3, 3 < 5 - T
//             j = 0, 0 < = 3 - T
//                 sum = 7
// Step1: i = 3, 3 < 5 - T
//             j = 1, 1 < = 3 - T
//                 sum = 8
// Step1: i = 3, 3 < 5 - T
//             j = 2, 2 < = 3 - T
//                 sum = 9
// Step1: i = 3, 3 < 5 - T
//             j = 3, 3 < = 3 - T
//                 sum = 10
// Step1: i = 3, 3 < 5 - T
//             j = 4, 4 < = 3 - F
// Step1: i = 4, 4 < 5 - T
//             j = 0, 0 < = 4 - T
//                 sum = 11
// Step1: i = 4, 4 < 5 - T
//             j = 1, 1 < = 4 - T
//                 sum = 12
// Step1: i = 4, 4 < 5 - T
//             j = 2, 2 < = 4 - T
//                 sum = 13
// Step1: i = 4, 4 < 5 - T
//             j = 3, 3 < = 4 - T
//                 sum = 14
// Step1: i = 4, 4 < 5 - T
//             j = 4, 4 < = 4 - T
//                 sum = 15
// Step1: i = 4, 4 < 5 - T
//             j = 5, 5 < = 4 - F
// Step1: i = 5, 5 < 5 - F
//             STOP