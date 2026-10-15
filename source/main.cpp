/**
 * @file main.cpp
 * @brief Точка входа приложения "Solver piecewise linear route".
 *
 * Программа создаёт окно SFML, инициализирует поле и запускает
 * интерактивный поиск оптимального ломаного маршрута.
 *
 * Запуск: solver.exe (в рабочей папке должны лежать arial.ttf/consola.ttf).
 */

#include "app.h"

int main() {
    App myApp;
    myApp.init();
    myApp.generateField(myFunction);
    myApp.run();
    return 0;
}