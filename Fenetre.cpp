//
// Created by eric on 26/10/19.
//

#include <QtWidgets/QFormLayout>
#include "Fenetre.h"
Fenetre::Fenetre() : QWidget()
{
    setFixedSize(300, 150);

    // Construction du bouton
    m_bouton = new QPushButton("Convertir", this);
    m_boutonquit=new QPushButton("RAZ",this);
    m_edit1=new QLineEdit("",this);
    m_edit2=new QLineEdit("",this);
    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow(tr("&Francs:"), m_edit1);
    formLayout->addRow(tr("&Euros:"), m_edit2);
    formLayout->addRow(m_bouton);
    formLayout->addRow(m_boutonquit);
    setLayout(formLayout);
    QObject::connect(m_bouton, SIGNAL(clicked()), this, SLOT(calculer()));
    QObject::connect(m_boutonquit, SIGNAL(clicked()), this, SLOT(raz()));

}

void Fenetre::calculer() {
    QString resulteuro;
    QString resultfranc;
    if(m_edit1->text().isEmpty())
    {
        resultfranc.setNum(m_edit2->text().toFloat()*6.55957);
        m_edit1->setText(resultfranc);
    }
    else{
        resulteuro.setNum(m_edit1->text().toFloat()/6.55957);
        m_edit2->setText(resulteuro);

    }


}

void Fenetre::raz() {
    m_edit1->clear();
    m_edit2->clear();

}
