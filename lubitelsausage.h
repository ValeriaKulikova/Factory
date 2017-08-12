#ifndef LUBITELSAUSAGE_H
#define LUBITELSAUSAGE_H


#include <iostream>
#include <string>

#include "Sausage.h"

namespace std {

}
class LubitelSausage  : public Sausage{

    Sausage sausage;
        void info() {
            cout << " LubitelSausage: " + sausage.MixingTheDough() + sausage.AddingComponents() + sausage.Cutting() + sausage.Packing() << endl;
        }
    };


    }

#endif // LUBITELSAUSAGE_H
