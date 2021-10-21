#include <iostream>

int main() {
    //Эта программа конвертирует чатлы в кц и сообщает, можно ли на них купить гравицапу
       float kz = 0.0f;
       int chattle = 0;
    std::cout << "Сколько у вас чатлов?\n";
    std::cout << "---> ";
    std::cin >> chattle;
    if (chattle > 0) {
        float oneChattle = 0.5 / 2200;
        std::cout << "Стоимость одного кц = " << oneChattle << std::endl;
        float chattle2Kz = oneChattle * chattle;
        std::cout << "Ваших чатлов хватит, чтобы купить " << chattle2Kz << " кц" << std::endl;
        if (chattle2Kz == 0.5) {
            std::cout << "Вы можете купить гравицапу!" << std::endl;
        } else if (chattle2Kz > 0 || chattle2Kz < 0.5) {
            std::cout << "Ваших чатлов не хватит, чтобы купить гравицапу" << std::endl;
        }
    } else {
        std::cout << "Вы ввели некорректные данные!" << std::endl;
    }
}
