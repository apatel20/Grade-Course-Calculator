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
    cout << "Type of assignment (HW, Quiz, Test, Project, Final)?:\t";
    cin.ignore();
    cin >> temp.assignmentType;

    cout << "Total Grade as a fraction?:\t";
    cin.ignore();
    cin >> temp.grade;

    cout << "What is the weight of the assignment (% as a decimal)?:\t";
    cin.ignore();
    cin >> temp.weight;


    g.insertGrade(temp);

    cout << "Are you done entering grades? Type 1 for yes or 0 to still enter grades...:\t";
    cin.ignore();
    cin >> keepGoing;

    if (keepGoing == 0)
    {
      break;
    }
    if (keepGoing != 0 || keepGoing != 1)
    {
      cout << "Please enter one of the choices above!" << endl;
    }
    //cout << g.getCount() << endl;

  } while (keepGoing != 1);

  return 0;
}
