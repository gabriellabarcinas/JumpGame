//
// Created by Gabby Barcinas on 4/20/21.
//

#ifndef JUMPGAME_NUMS_H
#define JUMPGAME_NUMS_H
#include <vector>

std::vector<int> convertAndStoreCommandLineArgs(int argc, char**argv);
bool makeMinJumps(std::vector<int>& nums, std::vector<int>& moves, int numsLength, int curr);
void printSolution(std::vector<int>& moves, bool solution);

#endif //JUMPGAME_NUMS_H
