#ifndef LUBITELSAUSAGEFACTORY_H
#define LUBITELSAUSAGEFACTORY_H

#include "Factory.h"
#include "LubitelSausage.h"

namespace std {

class LubitelSausageFactory: public Factory {
public:
    Sausage* createSausage() {
        return new LubitelSausage;
    }
};

}

#endif // LUBITELSAUSAGEFACTORY_H
