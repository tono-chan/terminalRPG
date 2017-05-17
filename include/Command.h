#ifndef COMMAND_H
#define COMMAND_H

#include <string>

enum class CommandType : int {
  ChangeBattleScene,
  ChangeMapScene,
  ChangeStartScene,
  ChangeShopScene,
  ChangeEventScene,
  SubScene,
  ChangeMenuScene
};

class Command {
 public:
  Command (CommandType type);
  void run ();
  CommandType type ();
  std::string name ();
 private:
  std::string name_;
  CommandType type_;
};

#endif //COMMAND_H
