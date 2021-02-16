//Justin Walker

#ifndef FILEIO_H
#define FILEIO_H
#include "../includes/constants.h"
#include <iostream>
#include <string>
#include <vector>


//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int loadData(const std::string filename, std::vector<process> &myProcesses);


//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string filename, std::vector<process> &myProcesses);


#endif 