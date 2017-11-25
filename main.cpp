#include <iostream>
#include <fstream>
#include "file_handler.hpp"
#include <string>
#include <vector>

/*
   Params: 2D vector 
   Prints out 2D vector in matrix format.  
*/
void print_arr(std::vector<std::vector<int>> arr) {
   for (int i = 0; i < arr.size(); i++) {
      for (int j = 0; j < arr[i].size(); j++) {
         std::cout << arr[i][j] << " ";
      }
      std::cout << std::endl;
   }
}


int main() {
   
   // convert txt file into 2D vector matrix
   std::string file_name  = "tsp_example_1.txt"; 
   std::vector<std::vector<int>> arr = file_to_arr(file_name); 
   print_arr(arr);

   // run TSP to find best tour

   // convert 2D vector matrix into txt.tour file

   return 0;
}
