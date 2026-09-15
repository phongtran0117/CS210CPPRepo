#include "geometry.h"

namespace cs210 {
    double circleArea(double radius) {
        // TODO: return pi * radius * radius
        return radius * radius * 3.14;
    }
}

namespace legacy_lib {
    double circleArea(double diameter) {
        // TODO: this version takes a DIAMETER. Convert it to a radius
        // first, then return pi * radius * radius.
        double radius = diameter / 2;
        return radius *radius * 3.14;
    }
}
