#include <iostream>
#include <fstream>

#include <iomanip>
#include <boost/format.hpp>
#include "tests/vector_tests.hpp"
#include "tests/line_tests.hpp"
#include "tests/plane_tests.hpp"
#include "linear_system.hpp"
#include "matrix.hpp"

using namespace LinearAlgebra;

int main() {
    std::setprecision(4);

    matrix m({vector({5, 6}), vector({3, -2})});

    std::cout << vector(m.find_eigenvalues()) << std::endl;

    return 0;
}