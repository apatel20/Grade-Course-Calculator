/*This is a calculator that will allow an input of grades and weights
and spit out the current grade in the class*/

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::cin;

struct Grade
{
  string assignmentType = "";//HW, Quiz, Test, Final, etc.
  double grade = 0.0;//the grade given in fraction form converted to decimal
  double weight = 0.0;//the weight of the particular assignment
};

//use a class for cleaner system design
class GradeCalc
{
public:
  GradeCalc();
  ~GradeCalc();

  bool insertGrade(Grade grade);

  int getCount();

  void calculate();

  //void setAssignmentType();

  //void setGradeValue();

  //void setWeight();


private:

  std::vector<Grade> grades;
};
