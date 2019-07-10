#define UNIT_TEST
#ifndef UNIT_TEST
//#include "../vector.hpp"
//#include <boost/test/auto_unit_test.hpp>
//#include <boost/test/unit_test.hpp>

using namespace LinearAlgebra;

BOOST_AUTO_TEST_SUITE(vector_calc_suite)

    /**
     * Lesson 2
     * --------
     *
     * Quiz: Plus, Minus, Scalar Multiply
     *
     */
    BOOST_AUTO_TEST_CASE(plus_minus_scalar_multiply) {
        vector vec1({ 0 });
        vector vec2({ 0 });
        vec1 = vector({ 8.218, -9.341 });
        vec2 = vector({ -1.129, 2.111 });
        std::cout << (vec1 + vec2) << std::endl;

        vec1 = vector({ 7.119, 8.215 });
        vec2 = vector({ -8.223, 0.878 });
        std::cout << (vec1 - vec2) << std::endl;

        vec1 = vector({ 1.671, -1.012, -0.318 });
        std::cout << (7.41 * vec1) << std::endl;
    }

    /**
     * Lesson 2
     * --------
     *
     * Quiz: Coding Magnitude & Direction
     *
     */
    BOOST_AUTO_TEST_CASE(magnitude_and_direction) {
        vector vec1({ 0 });
        vector vec2({ 0 });
        vec1 = vector({ -0.221, 7.437 });
        std::cout << vec1.magnitude() << std::endl;

        vec1 = vector({ 8.813, -1.331, -6.247 });
        std::cout << vec1.magnitude() << std::endl;

        vec1 = vector({ 5.581, -2.136 });
        std::cout << vec1.normalized_vector() << std::endl;

        vec1 = vector({ 1.996, 3.108, -4.554 });
        std::cout << vec1.normalized_vector() << std::endl;

        vec1 = vector({ 0 });
        std::cout << vec1.normalized_vector() << std::endl; // Throws exception: Cannot normalize the zero vector
    }

    /**
     * Lesson 2
     * --------
     *
     * Quiz: Coding Dot Product & Angle
     *
     */
    BOOST_AUTO_TEST_CASE(dot_product_and_angle) {
        vector vec1({ 0 });
        vector vec2({ 0 });
        vec1 = vector({ 7.887, 4.138 });
        vec2 = vector({ -8.802, 6.776 });
        std::cout << vec1.dot(vec2) << std::endl;

        vec1 = vector({ -5.955, -4.904, -1.874 });
        vec2 = vector({ -4.496, -8.755, 7.103 });
        std::cout << vec1.dot(vec2) << std::endl;

        vec1 = vector({ 3.183, -7.627 });
        vec2 = vector({ -2.668, 5.319 });
        std::cout << vec1.angle_with(vec2, true) << std::endl;

        vec1 = vector({ 7.35, 0.221, 5.188 });
        vec2 = vector({ 2.751, 8.259, 3.985 });
        std::cout << vec1.angle_with(vec2) << std::endl;

        try {
            std::cout << vec1.angle_with(vec2) << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    /**
     * Lesson 2
     * --------
     *
     * Quiz: Checking Parallel, Orthogonal
     *
     */
    BOOST_AUTO_TEST_CASE(checking_parallel_and_orthogonal) {
        vector vec1({ 0 });
        vector vec2({ 0 });
        vec1 = vector({ -7.579, -7.88 });
        vec2 = vector({ 22.737, 23.64 });
        std::cout << "Parallel  : " << vec1.is_parallel_to(vec2) << std::endl;
        std::cout << "Orthogonal: " << vec1.is_orthogonal_to(vec2) << std::endl;

        vec1 = vector({ -2.029, 9.97, 4.172 });
        vec2 = vector({ -9.231, -6.639, -7.245 });
        std::cout << "Parallel  : " << vec1.is_parallel_to(vec2) << std::endl;
        std::cout << "Orthogonal: " << vec1.is_orthogonal_to(vec2) << std::endl;

        vec1 = vector({ -2.328000, -7.284000, -1.214000 });
        vec2 = vector({ -1.821000f, 1.072000f, -2.94000f });
        std::cout << "Parallel  : " << vec1.is_parallel_to(vec2) << std::endl;
        std::cout << "Orthogonal: " << vec1.is_orthogonal_to(vec2) << std::endl;

        vec1 = vector({ 2.118, 4.872 });
        vec2 = vector({ 0, 0 });
        std::cout << "Parallel  : " << vec1.is_parallel_to(vec2) << std::endl;
        std::cout << "Orthogonal: " << vec1.is_orthogonal_to(vec2) << std::endl;
    }

    /**
     * Lesson 2
     * --------
     *
     * Quiz: Coding Vector Projections
     *
     */
    BOOST_AUTO_TEST_CASE(vector_projections) {
        vector vec1({ 0 });
        vector vec2({ 0 });
        vec1 = vector({ 3.039, 1.879 });
        vec2 = vector({ 0.825, 2.036 });
        std::cout << "Parallel  : " << vec1.component_parallel_to(vec2) << std::endl;

        vec1 = vector({ -9.88, -3.264, -8.159 });
        vec2 = vector({ -2.155, -9.353, -9.473 });
        std::cout << "Orthogonal: " << vec1.component_orthogonal_to(vec2) << std::endl;

        vec1 = vector({ 3.009, -6.172, 3.692, -2.51 });
        vec2 = vector({ 6.404, -9.144, 2.759, 8.718 });
        auto basis_vec = vec1.compute_by_basis_vec(vec2);
        std::cout << "Parallel component   : " << basis_vec[0] << std::endl;
        std::cout << "Orthogonal component : " << basis_vec[1] << std::endl;
    }

    /**
     * Lesson 2
     * --------
     *
     * Quiz: Coding Cross Products
     *
     */
    BOOST_AUTO_TEST_CASE(cross_product) {
        vector vec1({0});
        vector vec2({0});
        vec1 = vector({8.462, 7.893, -8.187});
        vec2 = vector({6.984, -5.975, 4.778});
        std::cout << vec1.cross(vec2) << std::endl;

        vec1 = vector({-8.987, -9.838, 5.031});
        vec2 = vector({-4.268, -1.861, -8.866});
        std::cout << vec1.area_of_parallelogram(vec2) << std::endl;

        vec1 = vector({1.5, 9.547, 3.691});
        vec2 = vector({-6.007, 0.124, 5.772});
        std::cout << vec1.area_of_triangle(vec2) << std::endl;
    }

BOOST_AUTO_TEST_SUITE_END()

#endif