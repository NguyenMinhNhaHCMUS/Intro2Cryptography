// Fast Fourier transform
// https://cp-algorithms.com/algebra/fft.html
// Reference: https://github.com/indy256/codelibrary/tree/main/cpp/numeric

#ifndef FFT_HPP
#define FFT_HPP

#include <iostream>
#include <cassert>
#include <complex>
#include <vector>
#include <string>

using namespace std;

using cpx = complex<double>;
const double PI = acos(-1);
extern vector<cpx> roots;

inline void ensure_capacity(int);
inline void fft(vector<cpx>&, bool);
extern vector<int> multiply_bigint(const vector<int>&, const vector<int>&, int);
inline vector<int> multiply_mod(const vector<int>&, const vector<int>&, int);

#endif