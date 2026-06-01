#ifndef LIBRARY_USER_H
#define LIBRARY_USER_H

class LibraryUser
{
public:
  virtual void registerAccount() = 0;
  virtual void requestBook() = 0;
  virtual ~LibraryUser() {}
};

#endif