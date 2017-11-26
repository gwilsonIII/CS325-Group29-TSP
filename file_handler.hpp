#ifndef file_handler_hpp
#define file_handler_hpp
#include <string>
#include <vector>

std::vector<std::vector<int>> file_to_arr(std::string ifile);
void arr_to_file(std::string, std::vector<int>);

struct City {
   int id, x, y;
};

#endif /* file_handler_hpp */
