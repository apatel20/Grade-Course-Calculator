#include "courseGradeCalc.hpp"
#include <QWidget>
#include <QPlainTextEdit>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QComboBox>
#include <QLineEdit>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QStringList>
#include <QLayout>
#include <QLabel>
#include <QTableView>


class CourseWidget : public QWidget
{
  Q_OBJECT

public:
  CourseWidget();

  void calculatePrint();

protected:
  GradeCalc  * myGrade;

private:
  QPushButton * add;
  QPushButton * calculate;

  QDoubleSpinBox * weight;

  QComboBox * assignType;

  QSpinBox * numerator;

  QSpinBox * denominator;

  QGraphicsView * view;
  QGraphicsScene * scene;

public slots:
  void onLButtonPressed();
  void onRButtonPressed();
};
