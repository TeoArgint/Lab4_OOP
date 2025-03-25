#include<iostream>
#include "test.h"
#include "Dreptunghi.h"
#include "ArieDreptunghi.h"
#include "PerimetruDreptunghi.h"
#include <cassert>

using namespace std;

void teste() {
    Dreptunghi d1(5,6);
    Dreptunghi d2(10,4);
    Dreptunghi d3;
    d3.setLungime(8);
    d3.setLatime(4);

    assert(d1.getLatime() == 6);
    assert(d2.getLungime() == 10);
    assert(d3.getLungime() == 8);
    assert(d3.getLatime() == 4);

    assert(arie(d1) ==30);
    assert(arie(d3) == 32);
    assert(perimetru(d3) == 24);

    assert(d3.getLatime() ==d2.getLatime());

    d1 = d2;
    assert(d2.getLatime() == d1.getLatime());
    assert(d2.getLungime() == d1.getLungime());
}