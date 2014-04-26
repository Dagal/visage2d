#include "FaceView.h"

FaceView::FaceView(QWidget *parent) :
  QGraphicsView(parent)
{
  setScene(new FaceScene());
  initialise();
}

FaceView::FaceView(QGraphicsScene *scene, QWidget *parent) :
  QGraphicsView(scene, parent)
{
  initialise();
}

void FaceView::initialise()
{
  setWindowTitle("Visage 2D");
  setRenderHints(QPainter::Antialiasing |
                 QPainter::SmoothPixmapTransform);
}
