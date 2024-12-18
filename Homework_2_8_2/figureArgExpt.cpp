#include "figureArgExpt.h"
#include <iostream>

FigureArgumentException::FigureArgumentException(const std::string& message) : message(message) {}
const char* FigureArgumentException::what() const noexcept {
    return "Ошибка создания фигуры. Причина: ", message.c_str();
}