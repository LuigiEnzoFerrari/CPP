#include "Conversion.hpp"
#include <bits/stdc++.h>

void    printChar(Conversion &luigi) {

        if ( luigi.toInt() >= 32 && luigi.toInt() <= 126 )
            std::cout << "char: " << luigi.toChar() << std::endl;
        else
            std::cout << "char: " << "Non displayable" << std::endl;
}

void    printFloat(Conversion &luigi) {
        if ( std::isinf(luigi.toFloat()) ) {
            if ( luigi.toFloat() < 0 )
                std::cout << "float: " << "-inff" << std::endl;
            else
                std::cout << "float: " << "inff" << std::endl;
        }
        else {
            if ( luigi.toFloat() == luigi.toInt() )
                std::cout << "float: " << luigi.toFloat() << ".0f" << std::endl;
            else
                std::cout << "float: " << luigi.toFloat() << "f" << std::endl;
        }
}

void    printDouble(Conversion &luigi) {
    if (std::isinf(luigi.toDouble())) {
        if ( luigi.toDouble() < 0)
            std::cout << "Double: " << "-inff" << std::endl;
        else
            std::cout << "Double: " << "inff" << std::endl;
    }
    else {
        if ( luigi.toDouble() == luigi.toInt() )
            std::cout << "Double: " << luigi.toDouble() << ".0" << std::endl;
        else
            std::cout << "Double: " << luigi.toDouble() << std::endl;
    }
}

void    print_all(char *str) {
    Conversion luigi;
    try {
        luigi.setTarget(str);
        printChar(luigi);
        std::cout << "int: " << luigi.toInt() << std::endl;
        printFloat(luigi);
        printDouble(luigi);
    } catch ( std::exception &e ) {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl;
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "error" << std::endl;
        return 1;
    }
    print_all(argv[1]);
}
