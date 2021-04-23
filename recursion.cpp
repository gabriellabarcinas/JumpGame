//
// Created by Jillian on 4/23/21.
//

#include "recursion.h"

// call a recursive function to get the solution
std::vector<int> getSolution(std::vector<int>& nums) {
    // get the length of the num and the index at 0 to see the end value
    /*
    for(int i = 0; i < nums.size(); i++) {
        if (nums.at(i) > nums.at(i-1)) {       // if value is greater than the one before it
            return nums.at(i) + nums.at(i + 1);
        } else {
            return nums.at(i);
        }
    }
    */
    return nums;
}

/* example:
Index	0	1	2	3	4	5	6
Value	1	2	4	1	1	1	7

solution: {0, 1, 3, 2, 6}

This is because you start at index 0 --> + 1 value
Then you are at index 1 --> + 2 value
Then you are at index 3 --> BUT go left because smaller solution bc nums.at(2) > nums.at(3)
So go left to index 2 --> + 4 value
Now you are at the end of the vector so the solution is solved.

 */