#include <iostream>
using namespace std;


// =====================================================
// LEETCODE PRACTICE — ARRAY TRAVERSAL (EASY)
// =====================================================


// 1. Array Traversal
// Solve: 20 problems
// Focus:
// - Loop through array
// - Access elements

// Progress: 20 / 20
// Status: DONE ✅


// 1. Find Maximum Number
// Given an array of integers,
// return the largest number.

void returnLargest () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    cin >> arr[0];
    int largest = arr[0];

    for (int i = 1; i < 5; i++) {
        cin >> arr[i];
         if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    cout << "The Largest Number Is:" << largest << endl;
}

// ----------------------------------------------------

// 2. Find Minimum Number
// Given an array,
// return the smallest number.

void returnSmallest () {
    cout << "Enter 5 Numbers\n";

    int arr[5];
    cin >> arr[0];
    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The Smallest Number Is: " << smallest << endl;
}

// ----------------------------------------------------

// 3. Sum of Array
// Given an array,
// return the sum of all elements.

void returnSumArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "The Sum Of All Elements Is: " << sum << endl;
}

// ----------------------------------------------------

// 4. Count Even Numbers
// Given an array,
// count how many numbers are even.

void countEvenArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    cout << count << "Even Numbers\n";
}

// ----------------------------------------------------

// 5. Count Positive Numbers
// Given an array,
// count how many numbers are greater than 0.

void countGreaterArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] > 0) {
            count++;
        }
    }

    cout << count << " Numbers Are Greater Than 0\n";
}

// ----------------------------------------------------

// 6. Check If Element Exists
// Given an array and a number target,
// return true if target exists in array,
// otherwise false.

void checkArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];
    bool target = false;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] == 4) {
            target = true;
        }
    }

    if (target) {
        cout << "Correct\n";
    } else {
        cout << "Wrong\n";
    }
}
// ----------------------------------------------------

// 7. Count Occurrences
// Given an array and a number x,
// count how many times x appears.

void countxArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];
    int a;

    int count = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter x Number\n";
    cin >> a;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == a) {
            count++;
        }
    }

    cout << "It Apperas " << count << endl;
}

// ----------------------------------------------------

// 8. Find Difference (Max - Min)
// Given an array,
// return (largest - smallest).

void larSmallArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];
    cin >> arr[0];

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] > largest) {
            largest = arr[i];
        } else if (arr[i] < smallest){
            smallest = arr[i];
        }
    }

    int difference = largest - smallest;

    cout << "The Difference (Max - Min) Is: " << difference << endl;
}

// ----------------------------------------------------

// 9. Multiply All Elements
// Given an array,
// create another array where each element = original * 2.

void multipleArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int arr2[5];

    for (int i = 0; i < 5; i++) {
        arr2[i] = arr[i] * 2;
    }

    cout << "Multiple Array\n";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << endl;
    }
}

// ----------------------------------------------------

// 10. Find Index of Largest Element
// Given an array,
// return the index of the largest element.

void indexlarArray () {
    cout << "Enter 5 Numbers\n";

    int arr[5];
    
    cin >> arr[0];
    int largest = arr[0];
    int index = 0;

    for (int i = 1; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] > largest) {
            largest = arr[i];
            index = i;
        }
    }
    
    cout << "The Index Of The Largest Number Is: \n" << index << endl;;
}

// 11. Find First Unique Element
// Given an array,
// find the first element that appears only once.

void findFirstArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        int count = 0;

        for (int j = 0; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << "The First Element Is: " << arr[i] << endl;
            return;
        }
    }
}
// ----------------------------------------------------

// 12. Check If Array is Strictly Increasing
// Given an array,
// check if every element is strictly greater than previous.

void checkEleArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    bool greater = true;
    for (int i = 1; i < 5; i++) {
        if (arr[i] <= arr[i - 1]) {
            greater = false;
        }
    }
    if (greater) {
        cout << "Greater\n";
    } else {
        cout << "Not Greater\n";
    }
}

// ----------------------------------------------------

// 13. Find Difference Between Adjacent Elements
// Given an array,
// print the difference between each pair of neighbors.

void printdiffArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < 5; i++) {
        int diffrence = arr[i] - arr[i - 1];
        cout << "The Diffrence Between Each Pair Is: " << diffrence << endl;
    }
}

// ----------------------------------------------------

// 14. Find All Indices of a Given Value
// Given array and number x,
// print all indices where x appears.

void printIndicesArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int num;
    cout << "Enter a Number X\n";
    cin >> num;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            cout << i << endl;
        }
    }
}

// ----------------------------------------------------

// 15. Replace Each Element with Next Greatest
// Replace every element with the greatest element on its right.
// Last element becomes -1.

void replaceElArr () {
    cout << "Enter 5 Numbers\n";

    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        int max = -1;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        arr[i] = max;
    }

    cout << "Swap\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    
}

// ----------------------------------------------------

// 16. Count Peaks in Array
// A peak is an element greater than its neighbors.
// Count how many peaks exist.

void countPeaks () {
    cout << "Enter 5 Numbers\n";
    int arr[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < 4; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }

    cout << "There Is " << count << " Peaks\n";
}

// ----------------------------------------------------


// 17. Find Longest Increasing Subsequence (Basic Version)
// Count length of longest continuous increasing sequence.

void countSubsequence () {
    cout << "Enter 5 Numbers\n";
    int arr[5];
    int count = 1;
    int maxLn = 1;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++) {
        if (arr[i] < arr[i + 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count > maxLn) {
                maxLn = count;
        }
    }

    cout << "The Longest Continuous Increasing Sequence is: " << maxLn << endl;
}

// ----------------------------------------------------


// 18. Find Balance Point (Basic)
// Find index where number of elements on left == right.

void findBalance () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 5; i++) {
        int left = i;
        int right = 5 - i - 1;
        if (left == right) {
            cout << i << endl;
        }
    }
}
// ----------------------------------------------------


// 19. Check If Array Alternates (Positive / Negative)
// Example: + - + - +
// Check if pattern holds.

void checkPattern () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    bool holds = true;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < 5; i++) {
        if (arr[i] > 0 && arr[i - 1] > 0 || arr[i] < 0 && arr[i - 1] < 0) {
            holds = false;
        }
    }

    if (holds) {
        cout << "Valid Pattern\n";
    } else {
        cout << "Invalid Pattern\n";
    }
}

// ----------------------------------------------------


// 20. Shift Left by One
// Move all elements to left,
// first element goes to the end.

void shiftElement () {
    cout << "Enter 5 Numbers\n";
    int arr[5];
 

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    int firstEl = arr[0];
    for (int i = 0; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    arr[4] = firstEl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}

// =====================================================


// 2. Counting / Frequency
// Solve: 15 problems
// Focus:
// - Count occurrences
// - Use counters

// Progress: 0 / 15
// Status: DONE ✅

// 1- Ask the user to enter 5 numbers
// Count how many numbers appear more than once

void countNumbers () {
    cout << "Enter 5 Numbers\n";
    int arr[5];
    int result = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // 1- Check If Already Processed
    for (int i = 0; i < 5; i++) {
        bool alreadyProcessed = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyProcessed = true;
            }
        }
        if (alreadyProcessed) continue;
     // 2- Count Frequency
    int freq = 0;
    for (int k = 0; k < 5; k++) {
        if (arr[i] == arr[k]) {
            freq++;
        }
    }
    // 3- Check Duplicated
    if (freq > 1) {
        result++;
    }
    }
    cout << result << endl;
}

// ///////////////////////////////////////////////

// 2- Ask the user to enter 5 numbers
// Find how many numbers appear exactly 2 times

void findNumbers () {
    cout << "Enter 5 Numbers\n";
    int arr[5];
    int result = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    // Check If Already Processed
    for (int i = 0; i < 5; i++) {
        bool alreadyProcessed = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyProcessed = true;
            }
        }

        if(alreadyProcessed) continue;
    // Count Frequency
        int freq = 0;
        for (int k = 0; k < 5; k++) {
            if (arr[i] == arr[k]) {
                freq++;
            }
        } 

        if (freq == 2) {
            result++;
        }
    }

    cout << result << endl;
}

// ///////////////////////////////////////////////

// 3- Ask the user to enter 5 numbers
// Find the number that appears the most (highest frequency)

void findHighestFrequency () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int highFreq = 0;
    int number = arr[0];

    for (int i = 0; i < 5; i++) {
        bool alreadyProcessed = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyProcessed = true;
                break;
            }
        }
        if (alreadyProcessed) continue;
        int freq = 0;
        for (int k = 0; k < 5; k++) {
            if (arr[i] == arr[k]) {
                freq++;
            }
        }
        if (freq > highFreq) {
            highFreq = freq;
            number = arr[i];
        }
    }
    cout << number << endl;
}

// ///////////////////////////////////////////////

// 4- Ask the user to enter 5 numbers
// Count how many numbers appear only once (unique elements)

void countAppearNum () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    
}

// ///////////////////////////////////////////////

// 5- Ask the user to enter 10 numbers
// Count how many pairs exist (example: [2,2] is one pair)

// ///////////////////////////////////////////////

// 6- Ask the user to enter 10 numbers
// Find all numbers that appear more than 2 times

// ///////////////////////////////////////////////

// 7- Ask the user to enter 10 numbers
// Count how many distinct numbers exist

// ///////////////////////////////////////////////

// 8- Ask the user to enter 10 numbers
// Find the first number that repeats

// ///////////////////////////////////////////////

// 9- Ask the user to enter 10 numbers
// Find the last number that repeats

// ///////////////////////////////////////////////

// 10- Ask the user to enter 10 numbers
// Check if all numbers are unique

// ///////////////////////////////////////////////

// Ask the user to enter 10 numbers
// Find the frequency of each number (print number + count)

// ///////////////////////////////////////////////

// 11- Ask the user to enter 10 numbers
// Find the number with the lowest frequency

// ///////////////////////////////////////////////

// 12- Ask the user to enter 10 numbers
// Count how many numbers appear an even number of times

// ///////////////////////////////////////////////

// 13- Ask the user to enter 10 numbers
// Remove duplicates conceptually and count unique remaining elements

// ///////////////////////////////////////////////

// 14- Ask the user to enter 10 numbers
// Find all numbers that appear exactly once and print them


int main () {
    
    // write code here
    // returnLargest ();
    // returnSmallest ();
    // returnSumArr ();
    // countEvenArr ();
    // countGreaterArr ();
    // checkArr ();
    // countxArr ();
    // larSmallArr ();
    // multipleArr ();
    // indexlarArray ();
    // findFirstArr ();
    // checkEleArr ();
    // printdiffArr ();
    // printIndicesArr ();
    // replaceElArr ();
    // countPeaks ();
    // countSubsequence ();
    // findBalance ();
    // checkPattern ();
    // shiftElement ();
    ////// Counting / Frequency
    // countNumbers ();
    // findNumbers ();
    // findHighestFrequency ();
    countAppearNum ();
    return 0;
}


// =====================================================
// LEETCODE CORE PATTERNS (ORDER MATCHES YOUR C++ FILE)
// =====================================================


// ================= BEGINNER PATTERNS =================


// ----------------------------------------------------

// ----------------------------------------------------

// 3. Min / Max Tracking
// Solve: 10 problems
// Focus:
// - Find smallest / largest
// - Update during loop

// Progress: 0 / 10
// Status: DONE ✅

// ----------------------------------------------------

// 4. String Traversal
// Solve: 20 problems
// Focus:
// - Loop through string
// - Work with characters

// Progress: 0 / 20
// Status: DONE ✅

// ----------------------------------------------------

// 5. Two Pointers
// Solve: 20 problems
// Focus:
// - Left & right pointers
// - Compare values

// Progress: 0 / 20
// Status: DONE ✅

// ----------------------------------------------------

// 6. Sliding Window
// Solve: 20 problems
// Focus:
// - Subarrays
// - Window size
// - Optimization

// Progress: 0 / 20
// Status: DONE ✅

// ================= SORTING & SEARCH =================

// 10. Binary Search
// Solve: 20 problems
// Focus:
// - Search in sorted arrays
// - Divide range

// Progress: 0 / 20
// Status: DONE ✅

// ================= RECURSION =================

// 11. Recursion
// Solve: 10 problems
// Focus:
// - Function calling itself
// - Base case

// Progress: 0 / 10
// Status: DONE ✅

// ================= START LEETCODE CORE =================

// ----------------------------------------------------

// 7. Hash Map (Frequency Map)
// Solve: 25 problems
// Focus:
// - Store counts
// - Fast lookup

// Progress: 0 / 25
// Status: DONE ✅

// ----------------------------------------------------

// 8. Prefix Sum
// Solve: 10 problems
// Focus:
// - Precompute sums
// - Range queries

// Progress: 0 / 10
// Status: DONE ✅

// ================= INTERMEDIATE =================

// 9. Stack
// Solve: 15 problems
// Focus:
// - LIFO logic
// - Use for expressions / parentheses

// Progress: 0 / 15
// Status: DONE ✅
// ================= TREES =================

// 13. Tree Traversal (DFS / BFS)
// Solve: 20 problems
// Focus:
// - Traverse nodes
// - Recursion / queue

// Progress: 0 / 20
// Status: DONE ✅
// ================= ADVANCED =================

// 12. Backtracking
// Solve: 10 problems
// Focus:
// - Try all possibilities
// - Undo choices

// Progress: 0 / 10
// Status: DONE ✅

// ----------------------------------------------------

// 14. Graph Traversal
// Solve: 15 problems
// Focus:
// - DFS / BFS
// - Visited nodes

// Progress: 0 / 15
// Status: DONE ✅

// ----------------------------------------------------

// 15. Dynamic Programming (DP)
// Solve: 20–25 problems
// Focus:
// - Overlapping subproblems
// - Memoization / tabulation

// Progress: 0 / 25
// Status: DONE ✅

// =====================================================
// TOTAL: ~230–250 problems
// =====================================================


// ================= HOW TO USE =================

// - Follow THIS order (matches your C++ file)
// - Solve 2–3 problems per day
// - Finish one pattern before moving
// - Do NOT skip patterns
// - Ask for hints if stuck


// ================= YOU ARE HERE =================

// NEXT STEP:
// → Pattern 2 (Counting)
// → Pattern 3 (Min / Max)

// THEN:
// → Pattern 5 (Two Pointers)

// =====================================================