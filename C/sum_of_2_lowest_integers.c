/*
Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers. No floats or non-positive integers will be passed.

For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

[10, 343445353, 3453445, 3453545353453] should return 3453455.
*/

//My Solution:

#include <stddef.h>

long long sum_two_smallest_numbers(size_t n, const int numbers[n]) {
    int l1 = numbers[0];
    int l2 = numbers[1];

    if (l2 < l1) {
        int temp = l1;
        l1 = l2;
        l2 = temp;
    }

    for (size_t i = 2; i < n; i++) {
        if (numbers[i] < l1) {
            l2 = l1;
            l1 = numbers[i];
        } else if (numbers[i] < l2) {
            l2 = numbers[i];
        }
    }

    return (long long)l1 + l2;
}