//
// Created by youhei on 17/05/11.
//

#include <ncurses.h>
#include <stdlib.h>
#include <BattleWindow.h>
#include <CommandMenu.h>
#include <iostream>
#include <Chara.h>
#include <CharaStatusWindow.h>

int main ()
{
  setlocale (LC_ALL, "");

  initscr();
  cbreak();
  noecho();
  erase();
  refresh ();

  std::string name = "勇者";
  std::string enname = "敵";
  int lv = 100;
  int exp =100;
  int hp = 100;
  int mp = 100;
  int str = 100;
  int dex = 100;
  int vit = 100;
  int intell = 100;
  int agi = 100;
  int mnd = 100;
  int luk = 100;

  Chara *player = new Chara(name, lv ,exp,hp, mp, str, dex, vit, intell, agi, mnd, luk);
  Chara *enemy = new Chara( enname, lv ,exp,hp, mp ,str, dex, vit, intell, agi, mnd, luk );

  CharaStatusWindow playerStatus(player, 18, 10);
  playerStatus.draw ();

  CharaStatusWindow enemyStatus(enemy, 0, 10);

  std::vector<std::string> command;
  command.push_back ("move");
  command.push_back ("action");
  command.push_back ("wait");
  command.push_back ("status");
  command.push_back ("オートバトル");
  CommandMenu commandMenu(command, 10, 60);

  while ( enemy->is_alive () ) {
      int select = commandMenu.select ();

      switch (select) {
          case 1 :
            player->attack (enemy);

            break;
        }
      playerStatus.draw ();
      enemyStatus.draw ();

    }

  clear();
  addstr("勝利した");
  refresh ();
  getchar();
  endwin();

}