#include "course_widget.hpp"

CourseWidget::CourseWidget()
{
  myGrade = new GradeCalc();

  add = new QPushButton("Add");
  calculate = new QPushButton("Calculate");
  weight = new QDoubleSpinBox;
  weight->setRange(0.01,1);
  weight->setSingleStep(0.1);
  weight->setSuffix("%");

  QStringList types = {"HW", "Quiz", "Test", "Project", "Final Exam"};
  assignType = new QComboBox;
  assignType->addItems(types);

  numerator = new QSpinBox;
  numerator->setRange(0,1000);
  denominator = new QSpinBox;
  denominator->setRange(0,1000);
  QLabel *div = new QLabel("/");

  scene = new QGraphicsScene;
  view = new QGraphicsView(scene);

  auto hLayout = new QHBoxLayout;
  auto hLayout2 = new QHBoxLayout;
  hLayout->addWidget(assignType);
  hLayout->addWidget(numerator);
  hLayout->addWidget(div);
  hLayout->addWidget(denominator);
  hLayout->addWidget(weight);

  auto vLayout = new QVBoxLayout;

  vLayout->addLayout(hLayout);
  hLayout2->addWidget(add);
  hLayout2->addWidget(calculate);
  vLayout->addLayout(hLayout2);
  vLayout->addWidget(view);

  setLayout(vLayout);

  //all of the connects can be placed here
  QObject::connect(add, SIGNAL(clicked()), this, SLOT(onLButtonPressed()));
  QObject::connect(calculate, SIGNAL(clicked()), this, SLOT(onRButtonPressed()));
}

void CourseWidget::calculatePrint()
{
  scene->clear();
  double currentGrade = myGrade->calculate();

  scene->addText("Current Grade is: " + QString::number(currentGrade * 100));
}

void CourseWidget::onLButtonPressed()
{
  scene->clear();
  //once signal is emitted, check for valid values
  Grade temp;
  temp.assignmentType = assignType->currentText().toStdString();

  double num = numerator->value();
  double denom = denominator->value();

  //perform some error checking here....

  temp.grade = num/denom;

  temp.weight = weight->value();

  myGrade->insertGrade(temp);

  scene->addText("Grade has been recorded"));
}

void CourseWidget::onRButtonPressed()
{
  calculatePrint();
}
