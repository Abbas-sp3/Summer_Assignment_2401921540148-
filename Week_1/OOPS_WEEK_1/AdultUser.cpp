#include "AdultUser.h"
#include <iostream>
using namespace std;

void AdultUser::registerAccount()
{
  if (age > 12)
  {
    cout << "you got registered as adult account" << endl;
  }
  else if (age < 12)
  {
    cout << "sorry you cannot register as adult age should be above 12" << endl;
  }
}

void AdultUser::requestBook()
{
  if (bookType == "Fiction")
  {
    cout << "book issued bring it back in 7 days" << endl;
  }
  else
  {
    cout << "oops you can only take fiction books" << endl;
  }
}