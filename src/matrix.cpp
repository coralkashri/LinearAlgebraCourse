#include "matrix.hpp"

namespace LinearAlgebra {


    matrix::matrix(size_t dim) {
        for (size_t i = 0; i < dim; i++) {
            std::vector<double> new_row(dim, 0);
            new_row[i] = 1;
            rows.emplace_back(new_row);
        }
    }

    matrix::matrix(const std::vector<vector> &rows) {
        size_t d = rows[0].dimension();
        for (auto &p : rows) {
            if (p.dimension() != d) throw rowsInDifferentDimException();
        }
        this->rows = rows;
    }

    matrix::matrix(const matrix &mat) {
        rows = mat.rows;
    }

    matrix matrix::operator*(const matrix &mat) const {
        matrix mat_t(mat.t());
        std::vector<vector> new_rows;
        for (size_t i = 0; i < this->size(); i++) {
            std::vector<double> new_row(mat_t.size());
            for (size_t j = 0; j < mat_t.size(); j++) {
                new_row[j] = this->rows[i].dot(mat_t.rows[j]);
            }
            new_rows.emplace_back(new_row);
        }

        return matrix(new_rows);
    }

    matrix matrix::operator*(double scalar) const {
        matrix new_matrix(*this);
        for (auto &row : new_matrix.rows) {
            row = row * scalar;
        }
        return new_matrix;
    }

    matrix matrix::operator/(double scalar) const {
        matrix new_matrix(*this);
        for (auto &row : new_matrix.rows) {
            row = row * (1 / scalar);
        }
        return new_matrix;
    }

    matrix matrix::operator-(const matrix &mat) const {
        matrix new_matrix(*this);
        for (size_t i = 0; i < new_matrix.size(); i++) {
            new_matrix[i] = new_matrix[i] - mat[i];
        }
        return new_matrix;
    }

    matrix matrix::operator+(const matrix &mat) const {
        matrix new_matrix(*this);
        for (size_t i = 0; i < new_matrix.size(); i++) {
            new_matrix[i] = new_matrix[i] + mat[i];
        }
        return new_matrix;
    }

    vector matrix::operator[](size_t row) const {
        if (row > this->size())
            throw rowNotExistsInMatrixException();
        if (row < 0)
            throw illegalRowException();
        return this->rows[row];
    }

    matrix matrix::t() const {
        std::vector<vector> new_rows;

        for (size_t i = 0; i < this->dimension(); i++) {
            std::vector<double> new_row(this->size());
            for (size_t j = 0; j < this->size(); j++) {
                new_row[j] = rows[j][i];
            }
            new_rows.emplace_back(new_row);
        }

        return matrix(new_rows);
    }

    matrix matrix::i() const {
        switch (size()) {
            case 1:
                return matrix({vector({1 / rows[0][0]})});

            case 2:
                if (det() == 0)
                    throw NonInvertibleMatrix();
                return matrix({vector({rows[1][1], -rows[0][1]}),
                               vector({-rows[1][0], rows[0][0]})}) * (1 / det());

            default:
                throw NotImplementedError();
        }
    }

    std::vector<double> matrix::find_eigenvalues() const {
        return std::vector<double>();
    }

    double matrix::det() const {
        if (size() != dimension()) {
            throw NonSquareMatrix();
        }
        double pos_mul = 1, neg_mul = -1;
        for (size_t i = 0; i < size(); i++) {
            pos_mul *= rows[i][i];
            neg_mul *= rows[i][size() - 1 - i];
        }
        return pos_mul + neg_mul;
    }

    size_t matrix::size() const {
        return rows.size();
    }

    size_t matrix::dimension() const {
        return rows[0].dimension();
    }

    std::ostream& operator<<(std::ostream& os, const matrix& mat) {
        os << "{\n";
        for (size_t i = 0; i < mat.size(); i++) {
            os << "\t" << mat.rows[i] << "\n\r";
        }
        os << "}";
        return os;
    }
}