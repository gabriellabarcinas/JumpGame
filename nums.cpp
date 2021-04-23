//
// Created by Gabby Barcinas on 4/20/21.
//
#include <vector>
#include <iostream>
#include "nums.h"
#include "recursion.h"

// store the command line arguments into a vector
std::vector<int> convertAndStoreCommandLineArgs(int argc, char**argv){
    std::vector<int> nums; // create a vector to store command line args

    for(int i = 1; i < argc; i++){
        int curNum = atoi(argv[i]); // convert command line argument to int
        nums.push_back(curNum); // add integer to vector
    }
    return nums;
}

// print out the solution to the game
void printSolution(std::vector<int>& nums) {
    // print the solution if it can be solved
    std::vector<int> solution;

    if (!isValidSolution(nums)) {
        std::cout << "There is no solution to the given game." << std::endl;
        // FIX ME: ONLY FOR TESTING
        displaySolution(nums);

    } else {
        solution = getSolution(nums);     // in recursion.h
        displaySolution(solution);      // This will display the solution
    }
}

// Check initially if the solution is valid
bool isValidSolution(std::vector<int>& nums) {
    // if the first number = 0 or > length then no solution
    if (nums.at(0) == 0 || nums.at(0) > nums.size()) {
        return false;
    } else {
        return true;
    }
}

// this function will correctly display the solution to the problem
void displaySolution(std::vector<int>& nums) {
    std:: cout << "The solution is: {";
    for(int i = 0; i < nums.size() - 1; i++) {
        std::cout << nums.at(i) << ", ";
    }
    std:: cout << nums.at(nums.size()-1) << "}";
}