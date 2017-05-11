//
// Created by youhei on 17/05/10.
//

#ifndef TERMINALRPG_EAST_ASIAN_WIDTH_H
#define TERMINALRPG_EAST_ASIAN_WIDTH_H

#include <string>

class east_width_asian {
 public:
  east_width_asian ();

  static const int codelist_size = 455;
  static const int width_char_code[codelist_size][2];

};

#endif //TERMINALRPG_EAST_ASIAN_WIDTH_H
