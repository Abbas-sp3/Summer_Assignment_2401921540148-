#ifndef KID_USER_H
#define KID_USER_H

#include <string>
#include "LibraryUser.h"
using namespace std;

class KidUser : public LibraryUser
{
public:
  int age;
  string bookType;

  void registerAccount();
  void requestBook();
};

#endif