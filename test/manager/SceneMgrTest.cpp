//
// Created by youhei on 17/05/15.
//

#include <KeyboardManager.h>
#include <SceneMgr.h>
#include <thread>
#include <ncurses.h>
#include <Fps.h>
#include <stdlib.h>
int main ()
{

  setlocale (LC_ALL, "");
  initscr ();
  cbreak();
  noecho();
  keypad(stdscr, true);

  KeyboardManager *keymgr = KeyboardManager::Instance ();
  keymgr->start_watch (60);

  Fps *fps = Fps::Instance ();

  bool game_status = true;
  SceneMgr *sceneMgr = new SceneMgr(SceneID::START);
  sceneMgr->initialize ();

  while ( game_status )
    {

      fps->update ();
      sceneMgr->update ();
      sceneMgr->draw ();

      fps->draw ();
      fps->wait ();


      if (keymgr->getKey () == 'q')  game_status = false;
    }
//  sceneMgr->finalize ();
  keymgr->exit_watch ();
  endwin();
}
