//
// Created by Gabby Barcinas on 4/20/21.
//
#include <vector>
#include <iostream>

std::vector<int> convertAndStoreCommandLineArgs(int argc, char**argv){
    std::vector<int> nums; // create a vector to store command line args

    for(int i = 1; i < argc; i++){
        int curNum = atoi(argv[i]); // convert command line argument to int
        nums.push_back(curNum); // add integer to vector
    }
    return nums;
}

bool Jump(std::vector<int>& nums, int numsLength, int curr){
//    std::vector<int> moves;
    std::cout << "Index " << curr << " contains: " <<  nums[curr] << std::endl;
    if (nums[curr] <= 0 || nums[curr] > numsLength) { // base case when no solution can be found
        std::cout << "There is no solution to the given game." << std::endl;
        return false;
    }if (curr == numsLength - 1) { // base case when we reach the last int
        std::cout << "Reached the end!" << std::endl;
        return true;
    }if (Jump(nums, numsLength, curr - nums[curr])){
        return true;
    }if (Jump(nums, numsLength, curr + nums[curr])) {
        return true;
    }
}


