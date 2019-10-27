//
// Created by eric on 26/10/19.
//

#ifndef CONVERTISSEUREUROFRANC_FENETRE_H
#define CONVERTISSEUREUROFRANC_FENETRE_H


#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QLineEdit>

class Fenetre:public QWidget {
Q_OBJECT
public:
    Fenetre();
public slots:
    void calculer();
    void raz();

private:
    QPushButton *m_bouton;
    QPushButton *m_boutonquit;
    QLineEdit *m_edit1;
    QLineEdit *m_edit2;


};


#endif //CONVERTISSEUREUROFRANC_FENETRE_H
