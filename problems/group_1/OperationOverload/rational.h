#pragma once

class Rational {
public:
    Rational(int numerator, int denominator)
        : numerator_(numerator)
        , denominator_(denominator) {
    }

    bool operator==(const Rational& r) const {
        return (numerator_ == r.numerator_) &&
            (denominator_ == r.denominator_);
    }

    Rational(int value) : numerator_(value) {}
    Rational& operator=(const int value) {
        numerator_ = value;
        denominator_ = 1;
        return *this;
    }

private:
    int numerator_ = 0;
    int denominator_ = 1;
};