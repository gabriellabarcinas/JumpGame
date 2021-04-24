// Project JumpGame
// Gabriella Barcinas and Angelina Lim
#include <iostream>
#include <vector>
#include "nums.h"
int main(int argc, char** argv) {
    std::vector<int> nums; // vector to store given integers
    std::vector<int> moves; // vector to store the indices/moves made
    int curr = 0;

    nums = convertAndStoreCommandLineArgs(argc, argv);
    int len = nums.size();

    Jump(nums, len, 0);

    return 0;
}

