#include "StringCalculator.h"

using namespace std;

int StringCalculator::add(string str)
{
  int finalValue = 0;
  for(int i = 0 ; i < str.size() ; ++i)
    {
       if (isdigit(str[i]))
        {
          int value = (str[i] - 48);
          if(value < 0)
          {
            throw  std::runtime_error("Negative number in string");
            return 0;
          }
          finalValue +=value;
        }
    }
  return finalValue;
}
