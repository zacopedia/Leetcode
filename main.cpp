#include <iostream>
#include <vector>
#include <unordered_map>
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

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < 5; i++) {
        bool alreadyProcessed = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyProcessed = true;
            }
        }

        if (alreadyProcessed )continue;

        int freq = 0;
        for (int k = 0; k < 5; k++) {
            if (arr[i] == arr[k]) {
                freq++;
            }
        }

        if (freq == 1) {
            count++;
        }
    }

    cout << "The Numbers That Appear Only Once Is: " << count << endl;
}

// ///////////////////////////////////////////////

// 5- Ask the user to enter 5 numbers
// Count how many pairs exist (example: [2,2] is one pair)

void countPairs () {
    cout << "Enter 5 Numbers\n";
    int arr1[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    int count = 0;

    for (int i = 0; i < 5; i++) {
        bool alreadyProcessed = false;
        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                alreadyProcessed = true;
            }
        }
        if (alreadyProcessed) continue;

        int freq = 0;
        for (int k = 0; k < 5; k++) {
            if (arr1[i] == arr1[k]) {
                freq++;
            }
        }

        count += freq / 2;
    }

    cout << "There Is " << count << "Pairs" << endl;
}

// ///////////////////////////////////////////////

// 6- Ask the user to enter 5 numbers
// Find all numbers that appear more than 2 times

void findNumAppear2Times () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int count = 0;

    // Check If Already Processed
    for (int i = 0; i < 5; i++) {
        bool alreadyProcessed = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyProcessed = true;
            }
        }
        if (alreadyProcessed) continue;

        // Count Frequency

        int freq = 0;
        for (int k = 0; k < 5; k++) {
            if (arr[i] == arr[k]) {
                freq++;
            }
        }
        
        // Find The Number That Appear 2 times
        if (freq > 2) {
            cout << "The Number That Appear 2 times Is: " << arr[i] << endl;
        }
    }

    
}

// ///////////////////////////////////////////////

// 7- Ask the user to enter 5 numbers
// Count how many distinct numbers exist

void countDistinct () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    int count = 0;
    for (int i = 0; i < 5; i++) {
        bool alreadyProcessed = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyProcessed = true;
                break;
            }
        }
        if (alreadyProcessed){
            count++;
        }
    }
    
    cout << "There Is Distinct: " << count << endl;
}

// ///////////////////////////////////////////////

// 8- Ask the user to enter 5 numbers
// Find the first number that repeats

void findFirstRepeat () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << endl;
                return;
            }
        }
    }

    cout << "No Repeating Number" << endl;
}

// ///////////////////////////////////////////////

// 9- Ask the user to enter 5 numbers
// Find the last number that repeats

void findLastRepeat () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int lastRepeatedNumber = 0;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
                if (arr[i] == arr[j]) {
                    lastRepeatedNumber = arr[i];
                    found = true;
                }
        }
    }

    if (found) cout << "The Last Repeat Number Is: " << lastRepeatedNumber << endl;
    else cout << "No Last Repeat Number " << endl;

}

// ///////////////////////////////////////////////

// 10- Ask the user to enter 5 numbers
// Check if all numbers are unique

void checkUniqueNumbers () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    bool unique = true;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                    unique = false;
                    break;
            }
        }
    }

    if (unique) cout << "All Numbers Are Unique" << endl;
    else cout << "The Numbers Are Not Unique" << endl;
}

// ///////////////////////////////////////////////

// Ask the user to enter 5 numbers
// Find the frequency of each number (print number + count)

void findFreqNumber () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < 5; i++) {
        bool alreadyProcessed = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyProcessed = true;
            }
        }

        if (alreadyProcessed) continue;

        int freq = 0;
        for (int k = 0; k < 5; k++) {
            if (arr[i] == arr[k]) {
                freq++;
            }
        }

        
            cout << arr[i] << "in" << freq << endl;
        
    }
}

// ///////////////////////////////////////////////

// 11- Ask the user to enter 5 numbers
// Find the number with the lowest frequency

void findLowestNumber () {
    cout << "Enter 5 Numbers\n";
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
int minFreq = 5;
int minNumber = arr[0];
    for (int i = 0; i < 5; i++) {
        bool alreadyProcessed = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyProcessed = true;
            }
        }

        if (alreadyProcessed) continue;

        int freq = 0;
        for (int k = 0; k < 5; k++) {
            if (arr[i] == arr[k]) {
                freq++;
            }
        }
        
        if (freq < minFreq) {
            minFreq = freq;
            minNumber = arr[i];
        }
    }
    cout << "The Number with The Lowest Frequency Is: " << minFreq << endl;

}

// ///////////////////////////////////////////////
//////// STL 
// vector
// unordered_map
// /////////////////// Counting / Frequency Exercises ////////////////////////////

// Ask the user to enter N numbers
// Count how many times each number appears

void countEachNumber () {
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    unordered_map<int,int>freq;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        freq[num]++;
    }
    
    cout << "List Of The Frequencies" << endl;
    for (auto p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }
    
}

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the number that appears the most times

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the number that appears the least times

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Count how many numbers appear exactly once

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Check if all elements are unique

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Count how many numbers are duplicated

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the first number that repeats

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find all numbers that appear more than once

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Count frequency of even and odd numbers

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the number with maximum frequency
// If tie → print the smallest one

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter N numbers
// Find the second most frequent number

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Count how many numbers appear more than N/2 times

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find all elements that appear more than N/3 times

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Check if array contains duplicates within distance K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the longest subarray where all elements are unique


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
    // countAppearNum ();
    // countPairs ();
    // findNumAppear2Times ();
    // countDistinct ();
    // findFirstRepeat ();
    // findLastRepeat ();
    // checkUniqueNumbers ();
    cout << "Program started\n";
    countEachNumber ();
    return 0;
}


// =====================================================
// LEETCODE CORE PATTERNS (ORDER MATCHES YOUR C++ FILE)
// =====================================================


// ================= BEGINNER PATTERNS =================


// ----------------------------------------------------
// Learn pair STL
// ----------------------------------------------------

// 3. Min / Max Tracking
// Solve: 10 problems
// Focus:
// - Find smallest / largest
// - Update during loop

// Progress: 0 / 10
// Status: DONE ✅

// /////////////////// Min / Max Tracking — Core ////////////////////////////

// Ask the user to enter N numbers
// Find the largest number

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the smallest number

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find both maximum and minimum in ONE pass

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the difference between max and min

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the index of the largest element

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter N numbers
// Find the second largest number WITHOUT sorting

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the second smallest number WITHOUT sorting

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the largest even number

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the smallest odd number

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the two largest numbers in ONE pass

// /////////////////// LeetCode Thinking ////////////////////////////

// Ask the user to enter N numbers
// Find the maximum difference (arr[j] - arr[i]) where j > i

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the maximum profit (buy low, sell high once)

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the maximum sum of a subarray

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the minimum sum of a subarray

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the maximum prefix sum
// ----------------------------------------------------

// 4. String Traversal
// Solve: 20 problems
// Focus:
// - Loop through string
// - Work with characters

// Progress: 0 / 20
// Status: DONE 

// /////////////////// String Traversal — Core ////////////////////////////

// Ask the user to enter a string
// Count how many vowels it contains

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Count how many consonants it contains

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Count how many digits appear in the string

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Find the first non-repeating character

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Find the most frequent character

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter a string
// Check if the string is a palindrome

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Reverse the string WITHOUT using built-in reverse

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Check if all characters are unique

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Remove all duplicate characters (keep first occurrence)

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Replace every digit with '*'

// /////////////////// LeetCode-Level Thinking ////////////////////////////

// Ask the user to enter a string
// Find the longest substring without repeating characters

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Find the length of the longest palindrome substring

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Count how many substrings contain only unique characters

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Find the longest prefix which is also a suffix (not whole string)

// ///////////////////////////////////////////////

// Ask the user to enter two strings
// Check if one is a rotation of the other

// ----------------------------------------------------

// 5. Two Pointers
// Solve: 20 problems
// Focus:
// - Left & right pointers
// - Compare values

// Progress: 0 / 20
// Status: DONE ✅

// Learn unordered_set

// /////////////////// Two Pointers — Core ////////////////////////////

// Ask the user to enter a sorted array of N numbers
// Check if there exists a pair with sum = X

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array
// Count how many pairs have sum = X

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array
// Find the pair with the closest sum to X

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Reverse the array using two pointers

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Check if it is a palindrome using two pointers

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter an array
// Move all zeros to the end while keeping order

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array
// Remove duplicates in-place

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Partition the array so that all negative numbers come before positives

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Find all pairs with difference = X

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array
// Find two numbers such that their product is closest to X

// /////////////////// LeetCode-Level ////////////////////////////

// Ask the user to enter a sorted array
// Find all unique triplets that sum to 0

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Find the container with most water

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Find the maximum number of pairs such that sum < X

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Find the longest palindrome substring using two pointers

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Find the maximum length subarray where sum <= X

// ----------------------------------------------------

// 6. Sliding Window
// Solve: 20 problems
// Focus:
// - Subarrays
// - Window size
// - Optimization

// Progress: 0 / 20
// Status: DONE ✅

// /////////////////// Sliding Window — Core ////////////////////////////

// Ask the user to enter N numbers and a value K
// Find the maximum sum of any subarray of size K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers and a value K
// Find the minimum sum of any subarray of size K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers and a value K
// Find the average of all subarrays of size K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers and a value K
// Count how many subarrays of size K have sum > X

// ///////////////////////////////////////////////

// Ask the user to enter N numbers and a value K
// Find the maximum number of even numbers in any window of size K

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter N numbers and a value K
// Find the smallest subarray with sum ≥ K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers and a value K
// Find the longest subarray with sum ≤ K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers and a value K
// Find the maximum sum of a subarray with size ≤ K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the longest subarray with all distinct elements

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Count subarrays with sum exactly equal to K

// /////////////////// String Sliding Window ////////////////////////////

// Ask the user to enter a string
// Find the longest substring without repeating characters

// ///////////////////////////////////////////////

// Ask the user to enter a string and a value K
// Find the longest substring with at most K distinct characters

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Count how many substrings contain only unique characters

// ///////////////////////////////////////////////

// Ask the user to enter a string and a pattern
// Find all starting indices where an anagram of the pattern appears

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Find the minimum window substring that contains all characters of another string

// ================= SORTING & SEARCH =================

// 10. Binary Search
// Solve: 20 problems
// Focus:
// - Search in sorted arrays
// - Divide range

// Progress: 0 / 20
// Status: DONE ✅

//////////////////// Binary Search — Core ////////////////////////////

// Ask the user to enter a sorted array and a target
// Find the index of the target using binary search

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array and a target
// Return true if the target exists, otherwise false

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array and a target
// Find the first occurrence of the target

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array and a target
// Find the last occurrence of the target

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array
// Count how many times a number appears

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter a sorted array
// Find the smallest element greater than or equal to X (lower bound)

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array
// Find the largest element less than or equal to X (upper bound idea)

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array
// Find the index where a target should be inserted

// ///////////////////////////////////////////////

// Ask the user to enter a sorted array
// Find the peak element (element greater than neighbors)

// ///////////////////////////////////////////////

// Ask the user to enter a sorted rotated array
// Find the minimum element

// /////////////////// LeetCode-Level ////////////////////////////

// Ask the user to enter a sorted rotated array and a target
// Find the index of the target

// ///////////////////////////////////////////////

// Given an array of integers
// Find the smallest subarray length with sum ≥ X using binary search

// ///////////////////////////////////////////////

// Given an array
// Find the square root of a number using binary search

// ///////////////////////////////////////////////

// Given N books and M students
// Allocate books so that maximum pages assigned is minimized

// ///////////////////////////////////////////////

// Given an array of positive integers
// Split the array into K subarrays such that the maximum sum is minimized

// ================= RECURSION =================

// 11. Recursion
// Solve: 10 problems
// Focus:
// - Function calling itself
// - Base case

// Progress: 0 / 10
// Status: DONE ✅

//////////////////// Recursion — Core ////////////////////////////

// Ask the user to enter a number N
// Print numbers from 1 to N using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a number N
// Print numbers from N to 1 using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a number
// Calculate factorial using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a number
// Calculate sum of digits using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a number
// Count how many digits it has using recursion

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter a number
// Reverse the number using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a number
// Check if it is a palindrome using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a number N
// Print Fibonacci sequence up to N using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a number
// Find the maximum digit in the number using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a number
// Find the minimum digit in the number using recursion

// /////////////////// Array Recursion ////////////////////////////

// Ask the user to enter N numbers
// Print all elements using recursion

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the maximum element using recursion

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the sum of all elements using recursion

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Check if the array is sorted using recursion

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the index of a given value using recursion

// /////////////////// LeetCode-Level Thinking ////////////////////////////

// Ask the user to enter a string
// Reverse the string using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Check if the string is a palindrome using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Remove all occurrences of a character using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Count how many vowels exist using recursion

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Generate all substrings using recursion

// ================= START LEETCODE CORE =================

// ----------------------------------------------------

// 7. Hash Map (Frequency Map)
// Solve: 25 problems
// Focus:
// - Store counts
// - Fast lookup

// Progress: 0 / 25
// Status: DONE ✅

// /////////////////// Hash Map — Core ////////////////////////////

// Ask the user to enter N numbers
// Count frequency of each number using a map

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the number with the highest frequency

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the number with the lowest frequency

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Count how many numbers appear exactly once

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Check if all elements are unique using a map

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter N numbers
// Find the first repeating element

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find all elements that appear more than once

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the element that appears more than N/2 times

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find all elements that appear more than N/3 times

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the second most frequent element

// /////////////////// LeetCode-Level ////////////////////////////

// Ask the user to enter N numbers
// Count number of subarrays with sum = K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the longest subarray with sum = K

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Find the first non-repeating character

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Group anagrams together

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Check if two strings are anagrams

// ----------------------------------------------------

// 8. Prefix Sum
// Solve: 10 problems
// Focus:
// - Precompute sums
// - Range queries

// Progress: 0 / 10
// Status: DONE ✅

// /////////////////// Prefix Sum — Core ////////////////////////////

// Ask the user to enter N numbers
// Build a prefix sum array

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Answer Q queries of sum from L to R using prefix sum

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the sum of the entire array using prefix

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the sum of elements between index i and j

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Count how many subarrays have sum exactly equal to K

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter N numbers
// Find the longest subarray with sum = K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Count how many subarrays have sum divisible by K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the maximum subarray sum using prefix sum

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the minimum subarray sum

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find how many subarrays have sum less than K

// /////////////////// LeetCode-Level ////////////////////////////

// Ask the user to enter N numbers
// Find the maximum sum of a subarray of size at least K

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the maximum difference between prefix sums

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Count number of subarrays with equal number of 0s and 1s

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the longest subarray with equal number of even and odd

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find the number of subarrays with sum in range [L, R]

// ================= INTERMEDIATE =================

// 9. Stack
// Solve: 15 problems
// Focus:
// - LIFO logic
// - Use for expressions / parentheses

// Progress: 0 / 15
// Status: DONE ✅

// /////////////////// Stack — Core ////////////////////////////

// Implement a stack using an array
// Support: push, pop, top, isEmpty

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Check if parentheses are balanced

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Reverse the string using a stack

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Remove all adjacent duplicates

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Check if the string is valid with (), {}, []

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter an array
// Find the next greater element for each element

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Find the next smaller element for each element

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Find the previous greater element for each element

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Find the previous smaller element for each element

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Find the stock span for each day

// /////////////////// LeetCode-Level ////////////////////////////

// Ask the user to enter an array
// Find the largest rectangle in a histogram

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Evaluate a postfix expression

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Convert infix expression to postfix

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Simplify a path (like "/a/./b/../c")

// ///////////////////////////////////////////////

// Ask the user to enter an array
// Find the maximum area of rectangle in a binary matrix
// ================= TREES =================

// 13. Tree Traversal (DFS / BFS)
// Solve: 20 problems
// Focus:
// - Traverse nodes
// - Recursion / queue

// Progress: 0 / 20
// Status: DONE ✅

// /////////////////// Tree Traversal — Core ////////////////////////////

// Create a binary tree manually
// Perform preorder traversal (root → left → right)

// ///////////////////////////////////////////////

// Create a binary tree
// Perform inorder traversal (left → root → right)

// ///////////////////////////////////////////////

// Create a binary tree
// Perform postorder traversal (left → right → root)

// ///////////////////////////////////////////////

// Create a binary tree
// Count total number of nodes

// ///////////////////////////////////////////////

// Create a binary tree
// Find the maximum value in the tree

// /////////////////// Level Up (DFS Thinking) ////////////////////////////

// Create a binary tree
// Calculate the height (depth) of the tree

// ///////////////////////////////////////////////

// Create a binary tree
// Count how many leaf nodes exist

// ///////////////////////////////////////////////

// Create a binary tree
// Find the minimum value in the tree

// ///////////////////////////////////////////////

// Create a binary tree
// Check if a value exists in the tree

// ///////////////////////////////////////////////

// Create a binary tree
// Find the sum of all nodes

// /////////////////// BFS (Level Order Traversal) ////////////////////////////

// Create a binary tree
// Print level order traversal (BFS)

// ///////////////////////////////////////////////

// Create a binary tree
// Print nodes level by level

// ///////////////////////////////////////////////

// Create a binary tree
// Find the maximum value at each level

// ///////////////////////////////////////////////

// Create a binary tree
// Find the average value at each level

// ///////////////////////////////////////////////

// Create a binary tree
// Count number of levels

// /////////////////// LeetCode-Level ////////////////////////////

// Create a binary tree
// Check if the tree is balanced

// ///////////////////////////////////////////////

// Create a binary tree
// Find the diameter of the tree

// ///////////////////////////////////////////////

// Create a binary tree
// Find the lowest common ancestor of two nodes

// ///////////////////////////////////////////////

// Create a binary tree
// Check if two trees are identical

// ///////////////////////////////////////////////

// Create a binary tree
// Invert the binary tree
// ================= ADVANCED =================

// 12. Backtracking
// Solve: 10 problems
// Focus:
// - Try all possibilities
// - Undo choices

// Progress: 0 / 10
// Status: DONE ✅

/////////////////// Backtracking — Core ////////////////////////////

// Ask the user to enter a number N
// Generate all subsets of numbers from 1 to N

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Generate all possible subsets of the string

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Generate all permutations of the string

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Generate all permutations of the array

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Generate all possible combinations of characters

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter a string
// Generate all permutations without duplicates

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Generate all subsets WITHOUT duplicates

// ///////////////////////////////////////////////

// Ask the user to enter a number N
// Generate all valid parentheses combinations

// ///////////////////////////////////////////////

// Ask the user to enter a number
// Find all combinations of numbers that sum to target

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find all subsets that sum to a given value

// /////////////////// LeetCode-Level ////////////////////////////

// Solve the N-Queens problem

// ///////////////////////////////////////////////

// Solve a maze (find all paths from start to end)

// ///////////////////////////////////////////////

// Given a string of digits
// Generate all possible letter combinations (phone keypad)

// ///////////////////////////////////////////////

// Given an array
// Generate all combinations of size K

// ///////////////////////////////////////////////

// Given a string
// Partition it into all possible palindrome substrings

// ----------------------------------------------------

// 14. Graph Traversal
// Solve: 15 problems
// Focus:
// - DFS / BFS
// - Visited nodes

// Progress: 0 / 15
// Status: DONE 

// /////////////////// Graph Traversal — Core ////////////////////////////

// Given a graph with N nodes and edges
// Perform DFS traversal starting from node 0

// ///////////////////////////////////////////////

// Given a graph with N nodes and edges
// Perform BFS traversal starting from node 0

// ///////////////////////////////////////////////

// Given a graph
// Count how many nodes are reachable from a given node

// ///////////////////////////////////////////////

// Given a graph
// Check if a path exists between two nodes

// ///////////////////////////////////////////////

// Given a graph
// Count the number of connected components

// /////////////////// Level Up ////////////////////////////

// Given a graph
// Detect if there is a cycle (undirected graph)

// ///////////////////////////////////////////////

// Given a graph
// Detect if there is a cycle (directed graph)

// ///////////////////////////////////////////////

// Given a graph
// Find the shortest path from source to all nodes (unweighted graph)

// ///////////////////////////////////////////////

// Given a graph
// Find the distance of each node from source using BFS

// ///////////////////////////////////////////////

// Given a graph
// Check if the graph is bipartite

// /////////////////// Grid-Based Graphs (VERY IMPORTANT) ////////////////////////////

// Given a grid of 0s and 1s
// Count number of islands

// ///////////////////////////////////////////////

// Given a grid
// Find the largest island size

// ///////////////////////////////////////////////

// Given a grid
// Find the shortest path from top-left to bottom-right

// ///////////////////////////////////////////////

// Given a grid
// Flood fill (change connected region color)

// ///////////////////////////////////////////////

// Given a grid
// Count number of distinct islands

// /////////////////// LeetCode-Level ////////////////////////////

// Given a graph
// Find all paths from source to target

// ///////////////////////////////////////////////

// Given a graph
// Clone the graph

// ///////////////////////////////////////////////

// Given a graph
// Find eventual safe states

// ///////////////////////////////////////////////

// Given a graph
// Topological sort

// ///////////////////////////////////////////////

// Given a graph
// Course schedule (detect if possible to finish all courses)

// ----------------------------------------------------

// 15. Dynamic Programming (DP)
// Solve: 20–25 problems
// Focus:
// - Overlapping subproblems
// - Memoization / tabulation

// Progress: 0 / 25
// Status: DONE 

////////////////// DP — Core (Start HERE) ////////////////////////////

// Ask the user to enter N
// Find the Nth Fibonacci number using DP

// ///////////////////////////////////////////////

// Ask the user to enter N
// Count number of ways to reach step N (1 or 2 steps at a time)

// ///////////////////////////////////////////////

// Ask the user to enter N
// Find minimum steps to reach N (1 step or 2 steps)

// ///////////////////////////////////////////////

// Ask the user to enter N
// Find the sum of first N numbers using DP

// ///////////////////////////////////////////////

// Ask the user to enter N
// Find factorial using DP (bottom-up)

// /////////////////// Level Up ////////////////////////////

// Ask the user to enter N
// Find maximum sum of non-adjacent elements

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find maximum subarray sum (Kadane using DP thinking)

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find minimum cost to climb stairs

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find number of ways to make sum K (coin change)

// ///////////////////////////////////////////////

// Ask the user to enter N numbers
// Find minimum number of coins to make sum K

// /////////////////// String DP ////////////////////////////

// Ask the user to enter a string
// Find the longest common subsequence between two strings

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Find the longest palindromic subsequence

// ///////////////////////////////////////////////

// Ask the user to enter two strings
// Check if one is a subsequence of the other

// ///////////////////////////////////////////////

// Ask the user to enter two strings
// Find edit distance between them

// ///////////////////////////////////////////////

// Ask the user to enter a string
// Count how many palindromic substrings exist

// /////////////////// LeetCode-Level ////////////////////////////

// Given N items with weights and values
// Solve 0/1 Knapsack problem

// ///////////////////////////////////////////////

// Given an array
// Partition it into two subsets with equal sum

// ///////////////////////////////////////////////

// Given an array
// Find the longest increasing subsequence

// ///////////////////////////////////////////////

// Given an array
// Find maximum product subarray

// ///////////////////////////////////////////////

// Given a grid
// Find minimum path sum from top-left to bottom-right

// =====================================================
// TOTAL: ~230–250 problems
// =====================================================






// =====================================================
// LEETCODE ROADMAP — TIME PLAN
// =====================================================

// Goal: Finish ALL core patterns properly (not rushed)

// =====================================================
// EASY FOUNDATIONS (3–5 days each)
// =====================================================

// 1. Array Traversal → 4 days
// 2. Counting / Frequency → 4 days
// 3. Min / Max Tracking → 4 days
// 4. String Traversal → 5 days

// =====================================================
// MEDIUM CORE PATTERNS (1 week each)
// =====================================================

// 5. Two Pointers → 7 days
// 6. Sliding Window → 7 days
// 7. Binary Search → 7 days
// 8. HashMap → 7 days
// 9. Prefix Sum → 6 days
// 10. Stack / Queue → 7 days

// =====================================================
// HARD THINKING PATTERNS (2 weeks each)
// =====================================================

// 11. Recursion → 10 days
// 12. Trees (DFS / BFS) → 12 days
// 13. Backtracking → 14 days
// 14. Graphs → 14 days

// =====================================================
// FINAL BOSS
// =====================================================

// 15. Dynamic Programming (DP) → 21 days

// =====================================================
// TOTAL ESTIMATED TIME
// =====================================================

// ≈ 120 – 150 days
// ≈ 4 – 5 months

// =====================================================
// RULES (IMPORTANT)
// =====================================================

// - Do NOT move to next topic until you understand
// - Solve problems WITHOUT help
// - If stuck → think → THEN ask
// - Focus on patterns, not memorization

// =====================================================
// GOAL
// =====================================================

// After finishing:
// → You should solve LeetCode EASY easily
// → Handle many MEDIUM problems
// → Understand HARD problems

// =====================================================


// STL /////////////
// Arrays
// ↓
// vector

// Counting / Frequency
// ↓
// unordered_map
// unordered_set
// pair

// String Traversal
// ↓
// string

// Functions
// ↓
// No STL

// Two Pointers
// ↓
// No new STL

// Sliding Window
// ↓
// No new STL

// Binary Search
// ↓
// No new STL

// Recursion
// ↓
// No new STL

// Array Recursion
// ↓
// No new STL

// Hash Map
// ↓
// unordered_map (already learned)

// Prefix Sum
// ↓
// No new STL

// Stack
// ↓
// stack

// Tree Traversal
// ↓
// queue

// Backtracking
// ↓
// No new STL

// Graph Traversal
// ↓
// No new STL
// (vector, stack, queue already learned)

// Dynamic Programming
// ↓
// No new STL

// --------------------------------

// STL Learned So Far

// vector
// pair
// string
// unordered_map
// unordered_set
// stack
// queue

// Solve 150-200 problems
// Phase 2
// priority_queue
// set
// map
// deque