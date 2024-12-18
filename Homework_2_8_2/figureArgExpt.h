#pragma once
#include <iostream>

class FigureArgumentException : public std::exception{
    public:
        FigureArgumentException(const std::string& message);
        const char* what()const noexcept override;
    private:
        std::string message;
};