// Bobby Kishor
// babkishor@csu.fullerton.edu
// @BobbyKishor27
// Partners: @angel97estr

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int size{static_cast<int>(arguments.size())-1};

  if (arguments.size() < 2) {
    std::cout << "erro: you must supply at least one number\n";
    return 1;
  }

  bool first=true;
  double sum=0.0;
  for (std::string argument : arguments){
    if(first)
    {
      first=false;
    }
    else{
      double number=std::stod(argument);
      sum=sum+number;
  }}

  double average = sum / size;

  std::cout << "average = "<< average;
  
  return 0;
}
