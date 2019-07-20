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

    void matrix_tests::determinant_test() {
        matrix m({vector({5, -2, 6, -1}), vector({0, 3, -8, 0}), vector({0, 0, 5, 4}), vector({0, 0, 0, 1})});
        std::cout << m.det() << std::endl;

        m = matrix({vector({2, 3}), vector({3, -6})});
        std::cout << m.det() << std::endl;
    }

    void matrix_tests::eigenvalues_and_eigenvectors_test() {
        matrix m({vector({5, 6}), vector({3, -2})});

        auto eigenvectors = m.find_eigenvectors();
        for (auto &evec : eigenvectors) {
            std::cout << evec << std::endl;
        }

        std::cout << "\n================" << std::endl;

        m = matrix({vector({5, -1}), vector({1, 3})});

        eigenvectors = m.find_eigenvectors();
        for (auto &evec : eigenvectors) {
            std::cout << evec << std::endl;
        }
    }

}
