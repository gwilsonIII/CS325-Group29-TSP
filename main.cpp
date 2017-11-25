#include <iostream>
#include <fstream>
#include "file_handler.hpp"
#include "tsp.hpp"
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

/*
   Params: 1D vector 
   Prints out 1D vector.  
*/
void print_arr(std::vector<int> arr) {
   for (int i = 0; i < arr.size(); i++) {
         std::cout << arr[i] << std::endl;
   }
}


int main() {
   
   // convert txt file into 2D vector matrix
   std::string in_file_name  = "tsp_example_1.txt"; 
   std::vector<std::vector<int>> arr = file_to_arr(in_file_name); 
   //print_arr(arr);

   // run TSP to find best tour
   std::vector<int> out_arr = tsp(arr);
   //print_arr(out_arr);

   // write output vector into txt.tour file
   std::string out_file_name  = in_file_name + ".tour"; 
   arr_to_file(out_file_name, out_arr);

   return 0;
}
