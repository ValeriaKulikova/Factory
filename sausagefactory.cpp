#include "DoctorSausageFactory.h"
#include "LubitelSausageFactory.h"
#include "OrehSausageFactory.h"
#include "Sausage.h"
#include <vector>

using namespace std;

int main() {
    DoctorSausageFactory* doctorSausage = new DoctorSausageFactory;
    LubitelSausageFactory* lubitelSausage = new LubitelSausageFactory;
    OrehSausageFactory* orehSausage = new OrehSausageFactory;

    vector<Sausage*> sausage;

    sausage.push_back(doctorSausage->createSausage());
    sausage.push_back(doctorSausage->createSausage());
    sausage.push_back(lubitelSausage->createSausage());
    sausage.push_back(doctorSausage->createSausage());
    sausage.push_back(lubitelSausage->createSausage());
    sausage.push_back(lubitelSausage->createSausage());
    sausage.push_back(orehSausage->createSausage());
    sausage.push_back(orehSausage->createSausage());
    sausage.push_back(orehSausage->createSausage());

    for (int i = 0; i < sausage.size(); i++) {
        sausage[i]->info();
    }

    return 0;
}
