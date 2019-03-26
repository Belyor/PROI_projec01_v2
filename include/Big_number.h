#ifndef Big_number_H
#define Big_number_H
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Big_number

{
private:
    string string_number_;
    string string_MAX_;
    vector<unsigned long long int> my_vec_number_{0, 0};
    const unsigned long long int ULLI_MAX_;
    const size_t size_string_MAX_;
    size_t size_string_number_;

public:
    //  Big_number
    Big_number(const unsigned long long int ulli_max, vector<unsigned long long int> vect);

    Big_number(string str_number);

    ~Big_number();

    Big_number operator=(const Big_number &other);
    Big_number operator+(const Big_number &other) const;
    Big_number operator-(const Big_number &other) const;
    Big_number operator*(const Big_number &other) const;
    bool operator>(const Big_number &other) const;
    bool operator<(const Big_number &other) const;
    bool operator==(const Big_number &other) const;

    string get_string_number()
    {
        return string_number_;
    }

    vector <unsigned long long int> get_vector_number()
    {
        return my_vec_number_;
    }

    size_t get_vector_size()
    {
        return my_vec_number_.size();
    }

protected:
};

#endif // Big_number_H
