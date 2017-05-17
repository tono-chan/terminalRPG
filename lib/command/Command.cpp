#include "Command.h"

Command::Command(CommandType type) {
    type_ = type;

    switch( type ) {
        case CommandType::ChangeBattleScene:
            name_ = "battle scene";
        break;
    }
}

CommandType Command::type() {
    return type_;
}

std::string Command::name() {
    return name_;
}
