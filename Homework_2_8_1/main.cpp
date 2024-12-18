#include <iostream>

class BadLenght : public std::exception{
    public:
        const char *what() const noexcept override {
            return "Вы ввели слово запретной длины! До свидания";
        }
};

int function(std::string str, int forbidden_lenght){
    int size_str = str.size();
    if(size_str == forbidden_lenght) throw BadLenght();
    return size_str;
}

int main(){
    std::cout << "Введите запретную длину: ";
    int forbidden_length = 0;
    std::cin >> forbidden_length;
    std::cout << "Введите слово: ";
    std::string word;
    int size_str = 0;
    try
    {
        while (1)
        {
            std::cin >> word;
            size_str = function(word, forbidden_length);
            std::cout << "Длина слова \"" + word + "\" равна " << size_str << std::endl;
        }
        
    }
    catch(const BadLenght& ex)
    {
        std::cerr << ex.what() << '\n';
        return 0;
    }
    
    return 0;
}
