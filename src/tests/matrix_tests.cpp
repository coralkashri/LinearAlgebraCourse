//
// Created by sherlock on 7/14/19.
//

#include "matrix_tests.h"

namespace LinearAlgebra {

    void matrix_tests::multiple_matrix_test() {
        matrix m1({
                          vector({5, 3, 1}),
                          vector({6, 2, 7})
                  });
        matrix m2({
                          vector({4, 2}),
                          vector({8, 1}),
                          vector({7, 4})
                  });
        matrix mul = m1 * m2;

        std::cout << m1 << " * " << m2 << " = " << mul << std::endl;
    }

    void matrix_tests::inverse_matrices_test() {
        matrix m1({vector({4, 5}),
                   vector({7, 1})});
        std::cout << m1.i() << std::endl;

        matrix m2({vector({4, 2}),
                   vector({14, 7})});
        try {
            std::cout << m2.i() << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

}
