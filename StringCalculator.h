#include<iostream>
#include<string>

class StringCalculator {
public:
  int add(std::string input);
private:
  int getValueOfInterger(int &postion , const std::string &str );
  int getValidIntergersOfString(int &postion , const std::string &str);
  bool isPositiveNumber(int postion , const std::string &str );
};


