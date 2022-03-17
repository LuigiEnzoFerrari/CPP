#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        void    create_zombie(std::string naming);
        void    annouce(void);
        ~Zombie();
};
#endif
