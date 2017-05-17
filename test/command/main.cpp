#include <gtest/gtest.h>
#include "Command.h"

TEST( command , type )
{
    Command command(CommandType::ChangeBattleScene);

    ASSERT_EQ(CommandType::ChangeBattleScene, command.type());
    ASSERT_EQ("battle scene", command.name());
}
