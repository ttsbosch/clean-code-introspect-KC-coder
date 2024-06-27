#include "StringCalculator.h"

using namespace std;


int StringCalculator::getValueOfInterger(int &postion , const string &str )
{
    int value = (str[postion] - 48);
    int i = postion + 1 ;
    for( i; i < str.size() ; ++i )
    {
        if (isdigit(str[i]))
        {
            std::cout << "value = " << value <<endl;
          value = (value * 10) + (str[i] - 48);  
        }
        else
        {
            break;
        }
    }
    postion = i;
    return value;
}
int StringCalculator::getValidIntergersOfString(int &postion , const string &str)
{
    int value = getValueOfInterger(postion ,str );
    if(value < 1000)
    {
        return value;
    }
    else
    {
        return 0;
    }
}

bool StringCalculator::isPositiveNumber(int postion , const string &str )
{
    bool isPositive = false;
    if((postion - 1) < 0 ) //to prevent NULL exception
    {
      if(str[postion - 1] == '-')
      {
          throw  std::runtime_error("Negative number in string");
      }
      isPositive = true;
    }
    else
    {
      isPositive = true;
    }
    return isPositive;
}

int StringCalculator::add(string str)
{
  int finalValue = 0;
  for(int i = 0 ; i < str.size() ; ++i)
    {
       if (isdigit(str[i]))
        {
        std::cout << "str[i]= " << str[i] << " || i = "<<i <<endl;
          bool isPositive = isPositiveNumber(i, str);
          if (isPositive)
          {
              finalValue +=getValidIntergersOfString(i, str); 
          }
        }
    }
  return finalValue;
}
