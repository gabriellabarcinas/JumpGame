// Project JumpGame
// Gabriella Barcinas and Angelina Lim
#include <iostream>
#include <vector>
#include "nums.h"
int main(int argc, char** argv) {
    std::vector<int> nums; // vector to store given integers
    std::vector<int> moves; // vector to store a specific path of jumps
    std::vector<int> minJumps; // vector to store the shortest path oj jumps

    nums = convertAndStoreCommandLineArgs(argc, argv);
    int destination = nums.size();

    Jumps(nums, moves, destination, 0, minJumps); // returns true or false if there is a possible solution

    printSolution(minJumps);

    return 0;
}

