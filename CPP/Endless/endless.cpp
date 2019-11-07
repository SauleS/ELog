#include <iostream>
#include <string>
int main(int argc, char **argv)
{
  std::string msg=(argc>1) ? argv[1] : "all work an no play....";
  while (1) {
    std::cout << msg << "\n";
  }
  return 1;
}

