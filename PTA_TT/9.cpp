#include<bits/stdc++.h>
using namespace std;

struct Rational
{
    long long numerator;
    long long denominator;

};

Rational simplify(Rational r) 
{
    long long common_divisor = __gcd(r.numerator, r.denominator);
    r.numerator /= common_divisor;
    r.denominator /= common_divisor;
    if (r.denominator < 0) { // 确保分母为正
        r.numerator = -r.numerator;
        r.denominator = -r.denominator;
    }
    return r;
}

Rational add(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

int main()
{
    int n;
    cin >> n;
    vector<Rational> fractions(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> fractions[i].numerator;
        cin.ignore();
        cin >> fractions[i].denominator;
        fractions[i] = simplify(fractions[i]);
    }
    Rational sum = {0, 1};
    for(const auto& frac : fractions) {
        sum = add(sum, frac);
    }

     if (sum.numerator == 0) {
        cout << "0" << endl;
    } else if (sum.denominator == 1) {
        cout << sum.numerator << endl;
    } else
    {
        long long integer_part = sum.numerator / sum.denominator;
        long long fractional_part_numerator = abs(sum.numerator % sum.denominator); // 取绝对值确保分子为正
        if(sum.numerator < 0) cout << '-';
        if (integer_part == 0) {
            cout << fractional_part_numerator << "/" << sum.denominator << endl;
        } else {
            cout << integer_part << " " << fractional_part_numerator << "/" << sum.denominator << endl;
        }
    }
    return 0;
}