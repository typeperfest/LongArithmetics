//
#ifndef LONGARITHMETICS_LONGARITHMETICS_H
#define LONGARITHMETICS_LONGARITHMETICS_H

class infinity_number
{
    uint8_t* number;
    uint8_t get_digit(const unsigned int& digit) const;

public:
    std::ostream& operator << (std::ostream&, infinity_number);
    infinity_number operator + (const infinity_number& n1, const infinity_number& n2);
    infinity_number operator - (const infinity_number& n1, const infinity_number& n2);
    infinity_number operator * (const infinity_number& n1, const infinity_number& n2);
    infinity_number operator / (const infinity_number& n1, const infinity_number& n2);
};



#endif //LONGARITHMETICS_LONGARITHMETICS_H
