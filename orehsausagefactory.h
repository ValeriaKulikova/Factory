#ifndef OREHSAUSAGEFACTORY_H
#define OREHSAUSAGEFACTORY_H


#include "Factory.h"
#include "OrehSausage.h"

namespace std {


class OrehSausageFactory: public Factory {
public:
    Sausage* createSausage() {
        return new OrehSausage;
    }
};

}
#endif // OREHSAUSAGEFACTORY_H
