#include "game.h"

using namespace std::literals;

int main() {
    std::setlocale(LC_ALL, "Russian");
    int board_size, scores;
    std::cout << "Размер поля: "s << std::endl;
    std::cin >> board_size;
    std::cout << "Сколько очков нужно для победы: "s << std::endl;
    std::cin >> scores;

    std::random_device rd;

    Game game{ rd(), board_size, scores };
    game.Start();
}