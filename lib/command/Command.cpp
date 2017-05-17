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
    }
}
void Command::run ()
{

}
