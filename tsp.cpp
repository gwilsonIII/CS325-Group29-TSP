#include <iostream>
#include <vector>

/* 
   Params: 2D vector matrix with each row containing: city ID, x coord, y coord. 
   Returns: 1D vector of ints, position 0 = tour length, 1: = city ID's in order visited.
*/
std::vector<int> tsp(std::vector<std::vector<int>> arr) {

   /*************************************/
   //TESTING PURPOSES ONLY
   int tour_len = 9999;  //this will change once algo is implemented, testing here
   std::vector<int> out_arr;
   out_arr.push_back(tour_len);
   for (int i = 0; i < arr.size(); i++) {
      out_arr.push_back(arr[i][0]);
   }

   return out_arr;
   /*************************************/
}
