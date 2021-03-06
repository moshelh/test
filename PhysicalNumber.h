#ifndef PROJECT3_PHYSICALNUMBER_H
#define PROJECT3_PHYSICALNUMBER_H

#include "Unit.h"
namespace ariel {
    class PhysicalNumber {
    private:
        static PhysicalNumber convert(PhysicalNumber pn);
    public:
        double value;
        Unit unit;


        PhysicalNumber(double num, Unit unit);


        //Output operator
        friend std::ostream& operator<<(std::ostream& os, const PhysicalNumber& c);
        //Input operator
        friend std::istream& operator>>(std::istream &in, PhysicalNumber &c);



        //Plus operators Binary and Unary
        const PhysicalNumber operator+ (const PhysicalNumber& pn1) ;
        const PhysicalNumber operator+ () ;
        const PhysicalNumber operator++() ;
        const PhysicalNumber operator++(int) ;
        const PhysicalNumber operator+= (const PhysicalNumber& pn1) ;


        //Minus operators Binary and Unary
        const PhysicalNumber operator- (const PhysicalNumber& pn1) ;
        const PhysicalNumber operator- () ;
        const PhysicalNumber operator--() ;
        const PhysicalNumber operator--(int) ;
        const PhysicalNumber operator-= (const PhysicalNumber& pn1) ;


        //Comparison operators
        friend const bool operator< (const PhysicalNumber& pn1, const PhysicalNumber& pn2);
        friend const bool operator<= (const PhysicalNumber& pn1, const PhysicalNumber& pn2);
        friend const bool operator> (const PhysicalNumber& pn1, const PhysicalNumber& pn2);
        friend const bool operator>= (const PhysicalNumber& pn1, const PhysicalNumber& pn2);
        friend const bool operator== (const PhysicalNumber& pn1, const PhysicalNumber& pn2);
        friend const bool operator!= (const PhysicalNumber& pn1, const PhysicalNumber& pn2);
        // friend  PhysicalNumber operator++ ( PhysicalNumber& pn1);
        // friend  PhysicalNumber operator++ ( PhysicalNumber& pn1,int);
        //friend const PhysicalNumber operator- (const PhysicalNumber& pn1, const PhysicalNumber& pn2);
        //friend  PhysicalNumber& operator+= (PhysicalNumber& pn1,const PhysicalNumber& pn2);
        //friend const PhysicalNumber operator+ (const PhysicalNumber& pn1, const PhysicalNumber& pn2) ;
        //friend  PhysicalNumber operator-- ( PhysicalNumber& pn1);
        //friend  PhysicalNumber operator-- ( PhysicalNumber& pn1,int);
        // friend  PhysicalNumber& operator-= (PhysicalNumber& pn1,const PhysicalNumber& pn2);
    };
};

#endif //PROJECT3_PHYSICALNUMBER_H
