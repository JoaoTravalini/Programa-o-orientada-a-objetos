#include "circuloo.h"

std::istream& operator>>(std::istream& input, Ponto& in) {
    in.read();
    return input;
}

std::ostream& operator<<(std::ostream& output, const Ponto& out) {
    out.print();
    return output;
}
