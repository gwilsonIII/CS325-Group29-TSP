#include <iostream>
#include <fstream>
#include "file_handler.hpp"
#include <string>
#include <vector>

/*
   Params:
      ifile: string, name of file to input into an array.
   Returns:
      a 2D vector of vectors of ints 
*/
std::vector<std::vector<int>> file_to_arr(std::string ifile) {
   std::string line;
   std::ifstream file (ifile);
   int one;
   int two;
   int three;
   std::vector<std::vector<int>> arr;

   while(file >> one >> two >> three) {
      arr.push_back({one, two, three});
   }

   return arr;
}


/*
   Params:
      ofile: string, name of file to output array to. 
      arr:  1D vector to be converted. 
*/
void arr_to_file(std::string ofile, std::vector<int> arr) {

}




