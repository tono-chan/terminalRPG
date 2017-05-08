//
// Created by youhei on 17/05/09.
//

#include "terminalWindow.h"

#include <sys/ioctl.h>
#include <unistd.h>

terminalWindow::terminalWindow() {
    struct winsize winsz;
    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &winsz) != -1) {
        width_ = winsz.ws_col;
        height_ = winsz.ws_row;
    }
}

int terminalWindow::width() {
    return width_;
}

int terminalWindow::height() {
    return height_;
}
