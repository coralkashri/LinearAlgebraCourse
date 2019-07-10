#include "line_tests.h"

namespace LinearAlgebra {

    void line_tests::parallel_equal_intersection() {
        std::cout << "========================== 1 ====================" << std::endl << std::endl;

        line l1(vector({4.046, 2.836}), 1.21);
        line l2(vector({10.115, 7.09}), 3.025);

        std::cout << "Parallel: " << l1.is_parallel_to(l2) << std::endl;
        std::cout << "Equal: " << (l1 == l2) << std::endl;
        try {
            std::cout << "Intersection point: " << l1.intersection_point_with(l2) << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        std::cout << "========================== 2 ====================" << std::endl << std::endl;

        l1 = line(vector({7.204, 3.182}), 8.68);
        l2 = line(vector({8.172, 4.114}), 9.883);

        std::cout << "Parallel: " << l1.is_parallel_to(l2) << std::endl;
        std::cout << "Equal: " << (l1 == l2) << std::endl;
        try {
            std::cout << "Intersection point: " << l1.intersection_point_with(l2) << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        std::cout << "========================== 3 ====================" << std::endl << std::endl;

        l1 = line(vector({1.182, 5.562}), 6.744);
        l2 = line(vector({1.773, 8.343}), 9.525);

        std::cout << "Parallel: " << l1.is_parallel_to(l2) << std::endl;
        std::cout << "Equal: " << (l1 == l2) << std::endl;
        try {
            std::cout << "Intersection point: " << l1.intersection_point_with(l2) << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

}