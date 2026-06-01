#include "KidUser.h"
#include <iostream>
using namespace std;

void KidUser::registerAccount()
{
  if (age < 12)
  {
    cout << "you got registered as kids account" << endl;
  }
  else if (age > 12)
  {
    cout << "sorry you cannot register as kid age should be below 12" << endl;
  }
}

void KidUser::requestBook()
{
  if (bookType == "Kids")
  {
    cout << "book issued bring it back in 10 days" << endl;
  }
  else
  {
    cout << "oops you can only take kids books" << endl;
  }
}