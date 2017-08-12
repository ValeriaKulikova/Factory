#ifndef OREHSAUSAGE_H
#define OREHSAUSAGE_H

#include <iostream>
#include <string>

#include "Sausage.h"

namespace std {

class OrehSausage  : public Sausage {

    Sausage sausage;
        void info() {
            cout << "OrehSausage: " + sausage.MixingTheDough() + sausage.AddingComponents() + sausage.Cutting() + sausage.Packing() << endl;
        }
    };


    }

#endif // OREHSAUSAGE_H
