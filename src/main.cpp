#include <iostream>
#include <fstream>

#include <iomanip>
#include "tests/vector_tests.hpp"
#include "tests/line_tests.hpp"
#include "tests/plane_tests.hpp"
#include "linear_system.hpp"
#include "matrix.hpp"
#include "tests/linear_system_test.hpp"
#include "tests/matrix_tests.h"

using namespace LinearAlgebra;

int main() {
    std::setprecision(4);

    matrix_tests::eigenvalues_and_eigenvectors_test();

    return 0;
}