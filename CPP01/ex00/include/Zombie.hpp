#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class   Zombie {
    private:
        std::string _name;
    public:
        Zombie( std::string name );
        ~Zombie( void );
        void    announce( void );
};

#endif
