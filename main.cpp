#include <QApplication>
#include <QPushButton>
#include "Fenetre.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Fenetre f;
    f.show();
    return app.exec();
}