#pragma once


#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include <list>
#include "Students_info.h"

using std::vector; //추가
using std::list;

double grade(double, double, const vector<double>&); // &(참조) 사용하면 const 가 필수
double grade(double, double, double);
double grade(const Student_Info&);

bool fgrade(const Student_Info&);
bool pgrade(const Student_Info&);
bool did_all_hw(const Student_Info&);

//vector<Student_info> extract_fails(vector<Student_info>&); // ???
list<Student_Info> extract_fails(list<Student_Info>&); // ???

#endif
