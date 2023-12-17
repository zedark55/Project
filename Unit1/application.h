#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

namespace UNIT1 {

class Application : public QApplication
{
public:
    Application(int argc,char* argv[]);
    virtual ~Application();
};
} // namespace UNIT1
#endif // APPLICATION_H
