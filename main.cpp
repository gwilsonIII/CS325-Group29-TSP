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
   std::cout << "PRINTING ARRAY ... 1" << std::endl;
   print_arr(arr);

   // run TSP to find best tour
   std::vector<int> out_arr = tsp(arr);
   std::cout << "PRINTING ARRAY ... 2" << std::endl;
   print_arr(out_arr);


   // convert 2D vector matrix into txt.tour file
   std::string out_file_name  = in_file_name + ".tour"; 


   return 0;
}
