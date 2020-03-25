#include <iostream>
#include <ncurses.h>

using namespace std;

void printMenu()
{
    int heigth, width, start_y, start_x;
    heigth = 23;
    width = 78;
    start_x = 0;
    start_y = 0;
    WINDOW *win = newwin(heigth, width, start_y, start_x);
    refresh();
    box(win,0,0);
    mvwprintw(win, 1, 1, "Proyecto 1, Estructuras de datos, USAC.");
    mvwprintw(win, 3, 1, "1. Jugar.");
    mvwprintw(win, 4, 1, "2. Cargar archivo.");
    mvwprintw(win, 5, 1, "3. Reportes.");
    mvwprintw(win, 6, 1, "4. Salir.");
    wrefresh(win);
}

int main()
{
    initscr();
    printMenu();
    bool play = true;
    while(play)
    {
        noecho();
        cbreak();
        char option = getch();
        if(option == '1')
        {

        }
        else if( option == '2')
        {

        }
        else if( option == '3')
        {

        }
        else if( option == '4')
        {
            clear();
            play = false;
        }
    }
    endwin();
    return 0;
}
