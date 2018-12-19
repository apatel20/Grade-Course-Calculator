#include "courseGradeCalc.hpp"

int main()
{
  GradeCalc g;

  Grade temp;
  int keepGoing = 0;

  cout << "Welcome to the Universal Grade Calculator!\n";
  cout << "Please enter your grade information below:\n\n";

  do
  {
    cout << "Type of assignment (HW, Quiz, Test, Project, Final)?:";
    cin.ignore();
    cin >> temp.assignmentType;

    cout << "Total Grade as a fraction (Enter numerator first, press enter, then denominator):\n";
    cin.ignore();
    double num;
    double denom;

    cin >> num;
    cout << "----\n";
    cin >> denom;

    temp.grade = num/denom;

    cout << "What is the weight of the assignment (% as a decimal)?:";
    cin.ignore();
    cin >> temp.weight;

    g.insertGrade(temp);

    cout << "Are you done entering grades? Type 1 for yes or 0 to still enter grades...:";
    cin.ignore();
    char temp = cin.get();

    if (temp == '0')
    {
      break;
    }
    else if (temp != '1')
    {
      cout << "Please enter one of the choices above!" << endl;
    }
  } while (true);

  g.calculate();

  return 0;
}
