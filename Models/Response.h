#pragma once

enum class Response
{
    OK,     // По умолчанию или успешное действие
    BACK,   // Нажатие на кнопку "Назад"
    REPLAY, // Нажатие на кнопку "Повтор" или перезапуск игры
    QUIT,   // Нажатие на кнопку закрытия окна
    CELL    // Нажатие на ячейку поля
};
