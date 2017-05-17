#ifndef COMMAND_H
#define COMMAND_H

enum class CommandType : int  {
    ChangeBattleScene,
    ChangeMapScene,
    ChangeStartScene
}

class Command {
    public:
        Command( CommandType );
        void run();
        CommandType type();
        std::string name();
    private:
        std::string name_;
        CommandType type_;
}



#endif //COMMAND_H
