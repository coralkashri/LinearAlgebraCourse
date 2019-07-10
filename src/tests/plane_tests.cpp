#include "plane_tests.h"

namespace LinearAlgebra {

    void plane_tests::parallel_equal_test() {
        plane p1 = plane(vector({-0.412, 3.806, 0.728}), -3.46);
        plane p2 = plane(vector({1.03, -9.515, -1.82}), 8.65);

        std::cout << "Parallel: " << p1.is_parallel_to(p2) << std::endl;
        std::cout << "Equal: " << (p1 == p2) << std::endl;

        p1 = plane(vector({2.611, 5.528, 0.283}), 4.6);
        p2 = plane(vector({7.715, 8.306, 5.342}), 3.76);

        std::cout << "Parallel: " << p1.is_parallel_to(p2) << std::endl;
        std::cout << "Equal: " << (p1 == p2) << std::endl;

        p1 = plane(vector({-7.926, 8.625, -7.212}), -7.952);
        p2 = plane(vector({-2.642, 2.875, -2.404}), -2.443);

        std::cout << "Parallel: " << p1.is_parallel_to(p2) << std::endl;
        std::cout << "Equal: " << (p1 == p2) << std::endl;
    }

}