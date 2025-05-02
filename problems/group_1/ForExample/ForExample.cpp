
#include <iostream>
/*
Создали класс Weekday в котором будем хранить дни недели
*/
enum class Weekday {
    MONDAY = 0,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
    UNKNOWN
};

/*
Создадим перегруженный оператор для сложения дня недели с целым числом
*/

Weekday operator+(const Weekday& day, int value) {
    if (day == Weekday::UNKNOWN) {
        return day;
    }
    const auto weekdays = static_cast<int>(day) + value;
    constexpr auto days = static_cast<int>(Weekday::UNKNOWN);
    const auto weekday_number = (weekdays % days + days) % days;
    return static_cast<Weekday>(weekday_number);
}

/*
Так же перегружаем оператор вывода из потока, для отображения Weekday
*/

std::ostream& operator<<(std::ostream& os, const Weekday& day) {
    switch (day) {
    case Weekday::MONDAY: os << "Monday"; break;
    case Weekday::TUESDAY: os << "Tuesday"; break;
    case Weekday::WEDNESDAY: os << "Wednesday"; break;
    case Weekday::THURSDAY: os << "Thursday"; break;
    case Weekday::FRIDAY: os << "Friday"; break;
    case Weekday::SATURDAY: os << "Saturday"; break;
    case Weekday::SUNDAY: os << "Sunday"; break;
    default: os << "Unknown"; break;
    }
    return os;
}

int main()
{
    int a, b;
    Weekday day = Weekday::MONDAY;
    std::cin >> a >> b;
    /*
    Тут мы просто сложим два числа, для этого нам перегрузка не нужна ведь в c++ мы и так можем их сложить
    */
    std::cout << "int a + int b = " << (a + b) << std::endl;
    /*
    А здесь уже применяем прегрузку, так как без неё компьютер просто не поймёт что мы складываем,
    так как в базе c++ нет никакого класса Weekday, мы его сделали сами.
    */
    std::cout << "Weekday day + int b = " << (day + b) << std::endl;
}
