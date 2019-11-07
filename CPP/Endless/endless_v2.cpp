#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
int main(int argc, char **argv)
{
  int n=(argc>1) ? atoi(argv[1]) : 1000;
  if (n<=0) n=1000;
  double *x= new double[1000*n];
  std::string msg=(argc>2) ? argv[2] : "all work an no play....";
  unsigned long i=0;
  while (1) {
    std::cout << i << " " << msg << "\n";
    usleep(300000);
    i++;
  }
  return 1;
}
