#include "StringCalculator.h"

using namespace std;


int StringCalculator::getValueofNumber(int postion , const string &str )
{
    int value = 0;
    std::cout << "(postion - 1)= " << (postion - 1) <<endl;
    if((postion - 1) == 0)
    {
        std::cout << "str[postion - 1]= " << str[postion - 1] <<endl;
      if(str[postion - 1] == '-')
      {
          std::cout << "str[postion - 1]= " << str[postion - 1] <<endl;
          throw  std::runtime_error("Negative number in string");
      }
    }
    else
    {
        value = (str[postion] - 48);
    }
    return value;
}

int StringCalculator::add(string str)
{
  int finalValue = 0;
  for(int i = 0 ; i < str.size() ; ++i)
    {
       if (isdigit(str[i]))
        {
        std::cout << "str[i]= " << str[i] << " || i = "<<i <<endl;
          int value = getValueofNumber(i, str);
          finalValue +=value;
        }
    }
  return finalValue;
}
