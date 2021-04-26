//
// Created by Gabby Barcinas on 4/20/21.
//
#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> convertAndStoreCommandLineArgs(int argc, char**argv){
    std::vector<int> nums; // create a vector to store command line args

    for(int i = 1; i < argc; i++){
        int curNum = atoi(argv[i]); // convert command line argument to int
        nums.push_back(curNum); // add integer to the back of the vector
    }
    return nums;
}

void printSolution(std::vector<int>& minJumps){

    if (minJumps.size() > 0){
        std::cout << "The solution is: ";
        std::cout << "{";
        for(const auto& jump : minJumps){
            if(&jump == &minJumps.back()){
                std::cout << jump << "}" << std::endl;
            }else{
                std::cout << jump << ", ";
            }
        }
    }else{
        std::cout << "There is no solution to the given game." << std::endl;
    }
}


void Jumps(std::vector<int>& nums, std::vector<int> moves, int dest, int curr, std::vector<int>& minJumps){

    if (curr == dest - 1) {  // base case when we reach the last int
        moves.push_back(curr);
        if (minJumps.empty() ||
            moves.size() < minJumps.size()) {  // determine if the path is the shortest that is seen thus far
            minJumps.clear(); // clear elements
            for (const auto &move : moves) {
                minJumps.push_back(move); // add shortest path to minJumps
            }
        }
        return;
    }

    moves.push_back(curr);
    if((curr - nums[curr]) > 0)
        if(find(moves.begin(), moves.end(), curr - nums[curr]) == moves.end()) // make sure index wasn't already checked
            Jumps(nums, moves, dest, curr - nums[curr], minJumps);

    if((curr + nums[curr]) <= dest)
        if(find(moves.begin(), moves.end(), curr + nums[curr]) == moves.end())// make sure index wasn't already checked
            Jumps(nums, moves, dest, curr + nums[curr], minJumps);

}

//void search (char *nos[], string s, int idx, int dest, string& solution) {
//    if (idx == dest) {              // Reached final node, found a solution
//        s += to_string (idx-1);
//        if ((solution == "") || (solution.length() > s.length()))   // Check if shortest solution (so far)
//            solution = s;
//        return;
//    }
//
//    int mov = atoi (nos[idx]);
//    s += to_string (idx-1) + " ";
//    if ((idx - mov) >= 1)
//        if (s.find (to_string (idx - mov - 1) + " ") == string::npos)  // avoid nodes already visited
//            search (nos, s, idx - mov, dest, solution);
//    if ((idx + mov) <= dest)
//        if (s.find (to_string (idx + mov - 1) + " ") == string::npos)  // avoid nodes already visited
//            search (nos, s, idx + mov, dest, solution);
//}

