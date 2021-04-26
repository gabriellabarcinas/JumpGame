//
// Created by Gabby Barcinas on 4/20/21.
//

#ifndef JUMPGAME_NUMS_H
#define JUMPGAME_NUMS_H
#include <vector>

std::vector<int> convertAndStoreCommandLineArgs(int argc, char**argv);
void Jumps(std::vector<int>& nums, std::vector<int> moves, int dest, int curr, std::vector<int>& minJumps);
void printSolution(std::vector<int>& minJumps);

#endif //JUMPGAME_NUMS_H

