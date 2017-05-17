//
// Created by youhei on 17/05/17.
//

#include <curses.h>
#include <Fps.h>
int main()
{
  initscr ();
  cbreak();
  noecho();
  keypad(stdscr, true);
  printf("start " );
  timeout (0);

  Fps *fps = Fps::Instance ();

  int key;
  int privious_key=ERR;
  int count = 0;

  move(0,0);

  WINDOW *push = newwin ( 1, 80, 1, 0 );
  WINDOW *release = newwin ( 1, 80, 2, 0 );
  WINDOW *pussing = newwin ( 1, 80, 3, 0 );
  wmove(push , 0,0);

  constexpr size_t viewtime=30;
  size_t push_count=0;
  size_t release_count=0;

  while (true) {
      fps->update ();

      privious_key = key;
      key = getch ();

      move(0, count );
      if ( key != ERR ) {
          addch ( key);
          count++;
        }


      if ( privious_key != key && privious_key == ERR) {
          wmove(push , 0 , 0);
          waddstr(push ,"push key" );
          push_count = viewtime;
        } else if ( privious_key != key && key == ERR ) {
          wmove(release , 0 , 0);
          waddstr(release , "release key");
          release_count = viewtime;
        }  else if ( key == privious_key && key != ERR) {
          wmove(pussing , 0 , 0);
          waddstr(pussing , "pussing");
        } else {
          if ( push_count-- == 0 ) { wclear(push); }
          if ( release_count-- == 0 ) { wclear(release); }
          wclear( pussing );
          wmove(pussing , 0 , 0);
          waddstr(pussing , "none");
        }

      wrefresh (push);
      wrefresh (release);
      wrefresh (pussing);
      touchwin(push);
      touchwin (release);
      touchwin(pussing);

      if(key == 'q') {
          break;
        }

      fps->wait ();
      fps->draw ();
    }
  endwin ();
}
