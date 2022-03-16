#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class   Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string naming);
        ~Zombie();
        void    annouce(void);
};

#endif
