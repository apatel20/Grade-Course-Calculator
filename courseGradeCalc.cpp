#include "courseGradeCalc.hpp"

GradeCalc::GradeCalc() {}


GradeCalc::~GradeCalc()
{
  grades.clear();
}

GradeCalc::ConstIteratorType GradeCalc::vecConstBegin() const noexcept{
  return grades.cbegin();
}

GradeCalc::ConstIteratorType GradeCalc::vecConstEnd() const noexcept{
  return grades.cend();
}

bool GradeCalc::insertGrade(Grade grade)
{
  //this function will check each component of the grades and return false
  //in those cases, otherwise put the grades in the vector

  //for now, assume all grades are good
  grades.push_back(grade);
  return true;
}

int GradeCalc::getCount()
{
  return grades.size();
}

double GradeCalc::calculate()
{
  //this function will perform the calculation and return to standard output
  double result = 0.0;

  for (auto it = grades.begin(); it != grades.end(); ++it)
  {
    result += ((*it).grade) * ((*it).weight);
  }

  cout << setprecision(5) << "Current Grade in the class is: " << result * 100 << endl;
  return result;
}
