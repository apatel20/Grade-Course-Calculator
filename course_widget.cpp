#include "course_widget.hpp"

CourseWidget::CourseWidget()
{
  add = new QPushButton("add");
  weight = new QDoubleSpinBox;

  QStringList types = {"HW", "Quiz", "Test", "Project", "Final Exam"};
  assignType = new QComboBox;
  assignType->addItems(types);

  numerator = new QLineEdit;
  denominator = new QLineEdit;

  scene = new QGraphicsScene;
  view = new QGraphicsView(scene);

  auto hLayout = new QHBoxLayout;
  hLayout->addWidget(assignType);
  hLayout->addWidget(numerator);
  hLayout->addWidget(denominator);
  hLayout->addWidget(weight);

  auto vLayout = new QVBoxLayout;

  vLayout->addLayout(hLayout);
  vLayout->addWidget(add);
  vLayout->addWidget(view);

  setLayout(vLayout);
}
