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

void printSolution(std::vector<int>& moves, bool solution){

    if (solution){
        std::cout << "The solution is: ";
        std::cout << "{";
        for(const auto& move : moves){
            if(&move == &moves.back()){
                std::cout << move << "}" << std::endl;
            }else{
                std::cout << move << ", ";
            }
        }
    }else{
        std::cout << "There is no solution to the given game." << std::endl;
    }
}


int minJumps(std::vector<int>& nums, int numsLength, int currIndex){

}

bool makeMinJumps(std::vector<int>& nums, std::vector<int>& moves, int numsLength, int curr){

//    std::cout << "Index " << curr << " contains: " <<  nums[curr] << std::endl;
    if (curr == numsLength - 1) { // base case when we reach the last int
        moves.push_back(curr);
        return true;
    }if (curr < 0 or curr > numsLength) { // base case if the index is out of range
        return false;
    }if (nums[curr] < 0){ // base case if an index has already been checked
        return false;
    }

    nums[curr] = -nums[curr]; // mark index as checked
    if(curr + nums[curr] < numsLength) {
        if (makeMinJumps(nums, moves, numsLength, curr - nums[curr])) {
            moves.insert(moves.begin(), curr);
            return true;
        }
        if (makeMinJumps(nums, moves, numsLength, curr + nums[curr])) {
            moves.insert(moves.begin(), curr);
            return true;
        }
    }
    return false;
}


