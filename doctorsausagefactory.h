#ifndef DOCTORSAUSAGEFACTORY_H
#define DOCTORSAUSAGEFACTORY_H


#include "DoctorSausage.h"
#include "Factory.h"

namespace std {

class DoctorSausageFactory: public Factory {
public:
    Sausage* createSausage() {
        return new DoctorSausage;
    }
};

}

#endif // DOCTORSAUSAGEFACTORY_H
