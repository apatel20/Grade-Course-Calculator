#include "course_widget.hpp"
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
QApplication app(argc, argv);

CourseWidget myC;

myC.show();

return app.exec();
}
