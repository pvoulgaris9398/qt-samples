#include <QtWidgets>
#include "mainwidget.h"

// Constructor for main widget
MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
   button_ = new QPushButton(tr("Push Me!"));
   textBrowser_ = new QTextBrowser();
   // This does not work.
   // It either doesn't show the window or errors with segmentation fault
   // textBrowser_->setText(tr("Initial entries..."));

   editor_ = new QTextEdit();
   // Does not like this either!???
   // editor_->setText(tr("Initial entries..."));

   label_ = new QLabel();
   label_->setText(tr("Please select from these options:"));

   QGridLayout *mainLayout = new QGridLayout;
   mainLayout->addWidget(label_, 0, 0);
   mainLayout->addWidget(button_, 1, 0);
   mainLayout->addWidget(editor_, 2, 0);
   mainLayout->addWidget(textBrowser_, 3, 0);

   setLayout(mainLayout);

   setWindowTitle(tr("Connecting buttons to processes.."));
}

// Destructor
MainWidget::~MainWidget()
{
   delete button_;
   delete textBrowser_;
}
