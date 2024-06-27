#include<iostream>
#include<string>

class StringCalculator {
public:
  int add(std::string input);
private:
  int getValueofNumber(int postion , const std::string &str );
};


