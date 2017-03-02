#include <iostream>
#include <string>
#include <iomanip>
int main (void){

  int i = 4;
  double d = 4.0;
  std::string s = "HackerRank ";

  int ii;
  double dd;
  std::string ss;

  std::cin >> ii;
  std::cin >> dd;
  std::cin.ignore();
  getline (std::cin, ss);
  

  std::cout << i + ii << std::endl;
  std::cout << std::setprecision(1) << std::fixed;
  std::cout <<  d + dd << std::endl;
  std::cout << s + ss << std::endl;
  
  return 0;
  
  
}
