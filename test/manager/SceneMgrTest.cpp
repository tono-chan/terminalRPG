//
// Created by youhei on 17/05/15.
//

#include <KeyboardManager.h>
#include <SceneMgr.h>
#include <thread>
#include <ncurses.h>
int main ()
{

  initscr ();
  cbreak();
  noecho();
  keypad(stdscr, true);

  KeyboardManager *keymgr = KeyboardManager::Instance ();
  keymgr->start_watch (60);

  boost::posix_time::ptime mst1;
  boost::posix_time::ptime mst2;
  long frame_time = 1000 / 30;
  long wait_time;
  bool damy = true;

  SceneMgr *sceneMgr = new SceneMgr(SceneID::START);
  sceneMgr->initialize ();

  while ( damy )
    {
      mst1 = boost::posix_time::microsec_clock::local_time ();


      sceneMgr->update ();
      sceneMgr->draw ();


      mst2 = boost::posix_time::microsec_clock::local_time ();
      boost::posix_time::time_duration took_time = mst2 - mst1;
      wait_time = frame_time - took_time.total_milliseconds ();
      if (wait_time > 0)
        {
          std::this_thread::sleep_for (std::chrono::milliseconds (wait_time));
        }

      if (keymgr->getKey () == 'q')  damy = false;
    }
  sceneMgr->finalize ();
  keymgr->exit_watch ();
  endwin ();
}
