#include "linear_system_test.hpp"

namespace LinearAlgebra {

    void linear_system_test::test_linear_system_planes() {
        hyperplane p0 = hyperplane(vector({1, 1, 1}), 1);
        hyperplane p1 = hyperplane(vector({0, 1, 0}), 2);
        hyperplane p2 = hyperplane(vector({1, 1, -1}), 3);
        hyperplane p3 = hyperplane(vector({1, 0, -2}), 2);

        linear_system s({p0, p1, p2, p3});

        for (auto &i : s.indices_of_first_nonzero_terms_in_each_row())
            std::cout << i << " ";
        std::cout << std::endl;
        std::cout << s[0] << ", " << s[1] << ", " << s[2] << ", " << s[3] << std::endl;
        std::cout << s.size() << std::endl;
        std::cout << s << std::endl;

        s[0] = p1;
        std::cout << s << std::endl;
    }

    void linear_system_test::test_row_operations() {
        hyperplane p0 = hyperplane(vector({1, 1, 1}), 1);
        hyperplane p1 = hyperplane(vector({0, 1, 0}), 2);
        hyperplane p2 = hyperplane(vector({1, 1, -1}), 3);
        hyperplane p3 = hyperplane(vector({1, 0, -2}), 2);

        linear_system s({p0, p1, p2, p3});

        s.swap_rows(0, 1);
        if (!(s[0] == p1 && s[1] == p0 && s[2] == p2 && s[3] == p3)) {
            std::cout << "test case 1 failed" << std::endl;
        }

        s.swap_rows(1, 3);
        if (!(s[0] == p1 && s[1] == p3 && s[2] == p2 && s[3] == p0)) {
            std::cout << "test case 2 failed" << std::endl;
        }

        s.swap_rows(3, 1);
        if (!(s[0] == p1 && s[1] == p0 && s[2] == p2 && s[3] == p3)) {
            std::cout << "test case 3 failed" << std::endl;
        }

        s.multiply_coefficient_and_row(1, 0);
        if (!(s[0] == p1 && s[1] == p0 && s[2] == p2 && s[3] == p3)) {
            std::cout << "test case 4 failed" << std::endl;
        }

        s.multiply_coefficient_and_row(-1, 2);
        if (!(s[0] == p1 &&
              s[1] == p0 &&
              s[2] == hyperplane(vector({-1, -1, 1}), -3) && s[3] == p3)) {
            std::cout << "test case 5 failed" << std::endl;
        }

        s.multiply_coefficient_and_row(10, 1);
        if (!(s[0] == p1 && s[1] == hyperplane(vector({10, 10, 10}), 10) && s[2] == hyperplane(vector({-1, -1, 1}), -3) &&
              s[3] == p3)) {
            std::cout << "test case 6 failed" << std::endl;
        }

        s.add_multiple_times_row_to_row(0, 0, 1);
        if (!(s[0] == p1 &&
              s[1] == hyperplane(vector({10, 10, 10}), 10) &&
              s[2] == hyperplane(vector({-1, -1, 1}), -3) &&
              s[3] == p3)) {
            std::cout << "test case 7 failed" << std::endl;
        }

        s.add_multiple_times_row_to_row(1, 0, 1);
        if (!(s[0] == p1 &&
              s[1] == hyperplane(vector({10, 11, 10}), 12) &&
              s[2] == hyperplane(vector({-1, -1, 1}), -3) &&
              s[3] == p3)) {
            std::cout << "test case 8 failed" << std::endl;
        }

        s.add_multiple_times_row_to_row(-1, 1, 0);
        if (!(s[0] == hyperplane(vector({-10, -10, -10}), -10) &&
              s[1] == hyperplane(vector({10, 11, 10}), 12) &&
              s[2] == hyperplane(vector({-1, -1, 1}), -3) &&
              s[3] == p3)) {
            std::cout << "test case 9 failed" << std::endl;
        }
    }

    void linear_system_test::test_triangular_form() {
        hyperplane p1 = hyperplane(vector({1, 1, 1}), 1);
        hyperplane p2 = hyperplane(vector({0, 1, 1}), 2);
        linear_system s({p1, p2});
        linear_system t = s.compute_triangular_form();
        if (!(t[0] == p1 && t[1] == p2)) {
            std::cout << "test case 1 failed" << std::endl;
        }

        p1 = hyperplane(vector({1, 1, 1}), 1);
        p2 = hyperplane(vector({1, 1, 1}), 2);
        s = linear_system({p1, p2});
        t = s.compute_triangular_form();
        if (!(t[0] == p1 && t[1] == hyperplane(vector({0}), 1))) {
            std::cout << "test case 2 failed" << std::endl;
        }

        p1 = hyperplane(vector({1, 1, 1}), 1);
        p2 = hyperplane(vector({0, 1, 0}), 2);
        hyperplane p3 = hyperplane(vector({1, 1, -1}), 3);
        hyperplane p4 = hyperplane(vector({1, 0, -2}), 2);
        s = linear_system({p1, p2, p3, p4});
        t = s.compute_triangular_form();
        if (!(t[0] == p1 && t[1] == p2 && t[2] == hyperplane(vector({0, 0, -2}), 2) && t[3] == hyperplane())) {
            std::cout << "test case 3 failed" << std::endl;
        }

        p1 = hyperplane(vector({0, 1, 1}), 1);
        p2 = hyperplane(vector({1, -1, 1}), 2);
        p3 = hyperplane(vector({1, 2, -5}), 3);
        s = linear_system({p1, p2, p3});
        t = s.compute_triangular_form();
        if (!(t[0] == hyperplane(vector({1, -1, 1}), 2) && t[1] == hyperplane(vector({0, 1, 1}), 1) && t[2] == hyperplane(vector({0, 0, -9}), -2))) {
            std::cout << "test case 4 failed" << std::endl;
        }

        p1 = hyperplane(vector({0, 0, 1}), 1);
        p2 = hyperplane(vector({0, 1, 1}), 2);
        p3 = hyperplane(vector({0, 0, 1}), 3);
        s = linear_system({p1, p2, p3});
        t = s.compute_triangular_form();
        std::cout << t << std::endl;
    }

    void linear_system_test::test_rref() {
        hyperplane p1 = hyperplane(vector({1, 1, 1}), 1);
        hyperplane p2 = hyperplane(vector({0, 1, 1}), 2);
        linear_system s({p1, p2});
        linear_system r = s.compute_rref();
        if (!(r[0] == hyperplane(vector({1, 0, 0}), -1) && r[1] == p2)) {
            std::cout << "test case 1 failed" << std::endl;
        }

        p1 = hyperplane(vector({1, 1, 1}), 1);
        p2 = hyperplane(vector({1, 1, 1}), 2);
        s = linear_system({p1, p2});
        r = s.compute_rref();
        if (!(r[0] == p1 && r[1] == hyperplane(vector({0}), 1))) {
            std::cout << "test case 2 failed" << std::endl;
        }

        p1 = hyperplane(vector({1, 1, 1}), 1);
        p2 = hyperplane(vector({0, 1, 0}), 2);
        hyperplane p3 = hyperplane(vector({1, 1, -1}), 3);
        hyperplane p4 = hyperplane(vector({1, 0, -2}), 2);
        s = linear_system({p1, p2, p3, p4});
        r = s.compute_rref();
        if (!(  r[0] == hyperplane(vector({1, 0, 0}), 0) &&
                r[1] == p2 &&
                r[2] == hyperplane(vector({0, 0, 1}), -1.0) &&
                r[3] == hyperplane())) {
            std::cout << "test case 3 failed" << std::endl;
            std::cout << r << std::endl;
        }

        p1 = hyperplane(vector({0, 1, 1}), 1);
        p2 = hyperplane(vector({1, -1, 1}), 2);
        p3 = hyperplane(vector({1, 2, -5}), 3);
        s = linear_system({p1, p2, p3});
        r = s.compute_rref();
        if (!(  r[0] == hyperplane(vector({1, 0, 0}), 23.0 / 9) &&
                r[1] == hyperplane(vector({0, 1, 0}), 7.0 / 9) &&
                r[2] == hyperplane(vector({0, 0, 1}), 2.0 / 9))) {
            std::cout << "test case 4 failed" << std::endl;
        }
    }

    void linear_system_test::test_ge_solution() {
        hyperplane p1 = hyperplane(vector({5.862, 1.178, -10.366}), -8.15);
        hyperplane p2 = hyperplane(vector({-2.931, -0.589, 5.183}), -4.075);
        linear_system s({p1, p2});
        linear_system::Result res = s.compute_ge_solution();
        std::cout << res << std::endl;

        p1 = hyperplane(vector({8.631, 5.112, -1.816}), -5.113);
        p2 = hyperplane(vector({4.315, 11.132, -5.27}), -6.775);
        hyperplane p3 = hyperplane(vector({-2.158, 3.01, -1.727}), -0.831);
        s = linear_system({p1, p2, p3});
        res = s.compute_ge_solution();
        std::cout << res << std::endl;

        p1 = hyperplane(vector({5.262, 2.739, -9.878}), -3.441);
        p2 = hyperplane(vector({5.111, 6.358, 7.638}), -2.152);
        p3 = hyperplane(vector({2.016, -9.924, -1.367}), -9.278);
        hyperplane p4 = hyperplane(vector({2.167, -13.543, -18.883}), -10.567);
        s = linear_system({p1, p2, p3, p4});
        res = s.compute_ge_solution();
        std::cout << res << std::endl;
    }

    void linear_system_test::test_parametrization() {
        hyperplane p1 = hyperplane(vector({0.786, 0.786, 0.588}), -0.714);
        hyperplane p2 = hyperplane(vector({-0.138, -0.138, 0.244}), 0.319);
        linear_system s({p1, p2});
        linear_system::Result res = s.compute_ge_solution();
        std::cout << res << std::endl;

        p1 = hyperplane(vector({8.631, 5.112, -1.816}), -5.113);
        p2 = hyperplane(vector({4.315, 11.132, -5.27}), -6.775);
        hyperplane p3 = hyperplane(vector({-2.158, 3.01, -1.727}), -0.831);
        s = linear_system({p1, p2, p3});
        res = s.compute_ge_solution();
        std::cout << res << std::endl;

        p1 = hyperplane(vector({0.935, 1.76, -9.365}), -9.955);
        p2 = hyperplane(vector({0.187, 0.352, -1.873}), -1.991);
        p3 = hyperplane(vector({0.374, 0.704, -3.746}), -3.982);
        hyperplane p4 = hyperplane(vector({-0.561, -1.056, 5.619}), 5.973);
        s = linear_system({p1, p2, p3, p4});
        res = s.compute_ge_solution();
        std::cout << res << std::endl;
    }

    void linear_system_test::test_hyperplanes() {
        hyperplane p1(vector({0.786, 0.786}), -0.714);
        hyperplane p2(vector({-0.131, -0.131}), 0.319);
        linear_system s({p1, p2});
        linear_system::Result res = s.compute_ge_solution();
        std::cout << res << std::endl;

        p1 = hyperplane(vector({2.102, 7.489, -0.786}), -5.113);
        p2 = hyperplane(vector({-1.131, -8.318, 1.209}), -6.775);
        hyperplane p3 = hyperplane(vector({9.015, -5.873, 1.105}), -0.831);
        s = linear_system({p1, p2, p3});
        res = s.compute_ge_solution();
        std::cout << res << std::endl;

        p1 = hyperplane(vector({0.786, 0.786, 8.123, 1.111, -8.363}), -9.955);
        p2 = hyperplane(vector({-0.131, 0.131, 7.05, -2.813, 1.19}), -1.991);
        p3 = hyperplane(vector({9.015, -5.873, -1.105, 2.013, -2.802}), -3.982);
        s = linear_system({p1, p2, p3});
        res = s.compute_ge_solution();
        std::cout << res << std::endl;
    }


}
