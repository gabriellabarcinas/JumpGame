/* JumpGame.cpp
Gabby Barcinas and Angelina Lim
ECS36B Homework 2.3 Jump Game

This program will include a recursive function in a Jump Game
*/
#include <vector>
#include "nums.h"

int main(int argc, char** argv) {
    // initialize variables
    std::vector<int> nums;
    // get vector from the command line
    nums = convertAndStoreCommandLineArgs(argc, argv);
    // call our game function
    printSolution(nums);
    return 0;
}

