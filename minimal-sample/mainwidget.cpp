#include <QtWidgets>
#include "mainwidget.h"
#include <QProcess>

// Constructor for main widget
MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
   button_ = new QPushButton(tr("Push Me!"));
   textBrowser_ = new QTextBrowser();
   // This does not work.
   // It either doesn't show the window or errors with segmentation fault
   // textBrowser_->setText(tr("Initial entries..."));

   editor_ =new QTextEdit();
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

   // Connect the Buttons "released" signal to MainWidget's onButtonReleased method
   connect(button_, SIGNAL(released()), this, SLOT(onButtonReleased()));
   connect(&process_, SIGNAL(readyReadStandardOutput()), this, SLOT(onCaptureProcessOutput()));
}

// Destructor
MainWidget::~MainWidget()
{
   delete button_;
   delete textBrowser_;
}

// Handler for button click
void MainWidget::onButtonReleased()
{
   textBrowser_->clear();
   // textBrowser_->append(tr("Running command:"));

   process_.setCurrentWriteChannel(QProcess::StandardOutput);
   process_.start("ls -alh"); // Start the program
}

void MainWidget::onCaptureProcessOutput()
{
   QProcess *process = qobject_cast<QProcess *>(sender());
   // if (process)
   textBrowser_->append(process->readAllStandardOutput());
}
