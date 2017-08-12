#ifndef DOCTORSAUSAGE_H
#define DOCTORSAUSAGE_H

#include <iostream>
#include <string>

#include "Sausage.h"

namespace std {


class DoctorSausage : public Sausage {
public:
    Sausage sausage;
        void info() {
            cout << "Doctor: " + sausage.MixingTheDough() + sausage.AddingComponents() + sausage.Cutting() + sausage.Packing() << endl;
        }
    };

    }
#endif // DOCTORSAUSAGE_H
