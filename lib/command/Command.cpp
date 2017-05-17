#include "Command.h"



CommandType Command::type() {
    return type_;
}

std::string Command::name() {
    return name_;
}
Command::Command (CommandType type)
{
  type_ = type;

  switch( type ) {
      case CommandType::ChangeBattleScene:
        name_ = "battle scene";
      break;

      case CommandType::ChangeMapScene:
        name_ = "map scene";
      break;

      case CommandType::ChangeStartScene:
        name_ = "start scene";
      break;

      case CommandType::ChangeEventScene:
        name_ = "event scene";
      break;

      case CommandType ::ChangeShopScene:
        name_ = "shop scene";
      break;

      case CommandType::SubScene:
        name_ = "sub scene";
      break;

      case CommandType::ChangeMenuScene:
        name_ = "menu scene";
      break;
    }
}
void Command::run ()
{

}
