#ifndef _GRADE_H_
#define _GRADE_H_

#include <vector>
#include "Student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);


#endif