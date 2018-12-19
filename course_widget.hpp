#include "courseGradeCalc.hpp"
#include <QWidget>
#include <QPlainTextEdit>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QComboBox>
#include <QLineEdit>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QStringList>
#include <QLayout>

class CourseWidget : public QWidget
{
  Q_OBJECT

public:
  CourseWidget();


private:
  QPushButton * add;

  QDoubleSpinBox * weight;

  QComboBox * assignType;

  QLineEdit * numerator;

  QLineEdit * denominator;

  QGraphicsView * view;
  QGraphicsScene * scene;
};
