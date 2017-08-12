#ifndef FACTORY_H
#define FACTORY_H

namespace std {

class Factory
{
public:
    virtual Sausage* createSausage() = 0;
};
}

#endif // FACTORY_H
