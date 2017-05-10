//
// Created by youhei on 17/05/10.
//

#ifndef TERMINALRPG_STRINGUTIL_H
#define TERMINALRPG_STRINGUTIL_H

#include <string>

class string_util {

 public:
  string_util (std::string word);

  int get_asian_width ();

  int get_size ();

  unsigned int get_char_code (std::string c);

 private:

  std::string word_;
};

#endif //TERMINALRPG_STRINGUTIL_H
