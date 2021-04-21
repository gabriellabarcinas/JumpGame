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

void makeJump(std::vector<int>& nums){
    int numMoves = 0;

    for(const auto& num : nums){
        if(num == 0){
            std::cout << "There is no solution to the given game." << std::endl;
        }if (num > 0){

        }
    }
}
