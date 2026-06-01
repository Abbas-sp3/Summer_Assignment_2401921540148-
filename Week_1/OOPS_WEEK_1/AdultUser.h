#ifndef ADULT_USER_H
#define ADULT_USER_H

#include <string>
#include "LibraryUser.h"
using namespace std;

class AdultUser : public LibraryUser
{
public:
  int age;
  string bookType;

  void registerAccount();
  void requestBook();
};

#endif