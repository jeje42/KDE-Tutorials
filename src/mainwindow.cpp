
#include "mainwindow.h"
// KF5
#include <KTextEdit>

MainWindow::MainWindow(QWidget *parent) : KXmlGuiWindow(parent)
{
  textArea = new KTextEdit();
  setCentralWidget(textArea);
  setupGUI();
}
