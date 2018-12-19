#include "courseGradeCalc.hpp"

GradeCalc::GradeCalc()
{

}

GradeCalc::~GradeCalc()
{
  grades.clear();
}

bool GradeCalc::insertGrade(Grade grade)
{
  //this function will check each component of the grades and return false
  //in those cases, otherwise put the grades in the vector

  //for now, assume all grades are good
  //cout << "Assignment Type" << grade.assignmentType << endl;
  //cout << "Grade" << grade.grade << endl;
  //cout << "Weight" << grade.weight << endl;
  grades.push_back(grade);
  return true;
}

int GradeCalc::getCount()
{
  return grades.size();
}

void GradeCalc::calculate()
{
  //this function will perform the calculation and return to standard output
  double result = 0.0;

  for (auto it = grades.begin(); it != grades.end(); ++it)
  {
    cout << "THIS IS THE GRADE: " << ((*it).grade) << endl;
    cout << "THIS IS THE Weight: " << ((*it).weight) << endl;
    result += ((*it).grade) * ((*it).weight);
    cout << "THIS IS RESULT: " << result << endl;
  }

  cout << setprecision(5) << "Current Grade in the class is: " << result * 100 << endl;

}
