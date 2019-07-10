#ifndef LINEARALGEBRACURSE_LINEAR_SYSTEM_TEST_H
#define LINEARALGEBRACURSE_LINEAR_SYSTEM_TEST_H

#include <boost/format.hpp>
#include "../plane.hpp"
#include "../linear_system.hpp"

namespace LinearAlgebra {

    class linear_system_test {

        void test_linear_system_planes();

        void test_row_operations();

        void test_triangular_form();

        void test_rref();

        void test_ge_solution();

        void test_parametrization();

        void test_hyperplanes();
    };

}

#endif //LINEARALGEBRACURSE_LINEAR_SYSTEM_TEST_H
