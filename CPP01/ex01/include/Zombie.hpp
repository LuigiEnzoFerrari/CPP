#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie {
    private:
        std::string _name;
    public:
        Zombie( void );
        ~Zombie( void );

        void    create_zombie(std::string name);
        void    announce( void );
};

#endif
