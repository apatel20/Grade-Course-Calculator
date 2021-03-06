/*This is a calculator that will allow an input of grades and weights
and spit out the current grade in the class*/

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::setprecision;

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

  double calculate();

  typedef std::vector<Grade>::const_iterator ConstIteratorType;

  /// return a const-iterator to the beginning of tail
  ConstIteratorType vecConstBegin() const noexcept;

  /// return a const-iterator to the tail end
  ConstIteratorType vecConstEnd() const noexcept;

private:
  // convenience typedef
  typedef std::vector<Grade>::iterator IteratorType;

  std::vector<Grade> grades;
};
