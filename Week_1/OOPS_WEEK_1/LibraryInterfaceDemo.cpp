#include "KidUser.h"
#include "AdultUser.h"

int main()
{
  KidUser youngReader;
  youngReader.age = 10;
  youngReader.registerAccount();
  youngReader.age = 18;
  youngReader.registerAccount();

  youngReader.bookType = "Kids";
  youngReader.requestBook();
  youngReader.bookType = "Fiction";
  youngReader.requestBook();

  AdultUser member;
  member.age = 5;
  member.registerAccount();
  member.age = 23;
  member.registerAccount();

  member.bookType = "Kids";
  member.requestBook();
  member.bookType = "Fiction";
  member.requestBook();

  return 0;
}