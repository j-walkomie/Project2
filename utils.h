//Justin Walker

#ifndef UTILS_H
#define UTILS_H

#include "../includes/constants.h"
#include <vector>

//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
//returns nothing
void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses);

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(vector<process> &myProcesses);

//returns the number of entries in the vector
int getSize(vector<process> &myProcesses);

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(vector<process> &myProcesses);

#endif 